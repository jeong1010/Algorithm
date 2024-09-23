#include <stdio.h>
#include <stdlib.h>
void bubbleSort(int arr[], int n) {
	int last = n;
	int tmp, isSorted;
	for (int i = 0; i < n - 1; i++) {
		isSorted = 1;
		for (int j = 1; j < last; j++) {
			if (arr[j - 1] > arr[j]) {
				tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
				isSorted = 0;
			}
		}
		last--; 
		if (isSorted) break;
	}
}
int main() {
	int* arr;
	int n;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	bubbleSort(arr, n);
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	return 0;
}
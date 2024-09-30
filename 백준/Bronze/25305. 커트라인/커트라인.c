#include <stdio.h>
#include <stdlib.h>
void mkHeap(int arr[], int i, int n) {
	if (i * 2 + 1 >= n) return;
	int maxIndex, tmp;
	mkHeap(arr, i * 2 + 1, n);
	mkHeap(arr, i * 2 + 2, n);
	if (i * 2 + 2 >= n) maxIndex = i * 2 + 1;
	else if (arr[i * 2 + 1] > arr[i * 2 + 2])
		maxIndex = i * 2 + 1;
	else
		maxIndex = i * 2 + 2;
	if (arr[maxIndex] > arr[i]) {
		tmp = arr[i];
		arr[i] = arr[maxIndex];
		arr[maxIndex] = tmp;
		mkHeap(arr, maxIndex, n);
	}
}
void heapSort(int arr[], int n) {
	if (n == 1) return;
	int tmp;
	tmp = arr[0];
	arr[0] = arr[n - 1];
	arr[n - 1] = tmp;
	mkHeap(arr, 0, n-1);
	heapSort(arr, n - 1);
}
int main() {
	int n, k;
	int* arr;
	scanf("%d %d", &n, &k);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	mkHeap(arr, 0, n);
	heapSort(arr, n);
	printf("%d\n", arr[n - k]);
	free(arr);
	return 0;
}
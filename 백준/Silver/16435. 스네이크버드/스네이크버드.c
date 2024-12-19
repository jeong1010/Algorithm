#include <stdio.h>
#include <stdlib.h>
void qSort(int arr[], int t, int n) {
	if (t >= n) return;
	int pivot = n;
	int i = t-1, tmp;
	for (int j=t; j < n; j++) {
		if (arr[j] < arr[pivot]) {
			tmp = arr[++i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	tmp = arr[++i];
	arr[i] = arr[pivot];
	arr[pivot] = tmp;
	pivot = i;
	qSort(arr, t, pivot - 1);
	qSort(arr, pivot + 1, n);
}
int main() {
	int* arr;
	int n, l;
	scanf("%d %d", &n, &l);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	qSort(arr, 0, n-1);
	for (int i = 0; i < n; i++) {
		if (l >= arr[i])l++;
	}
	printf("%d\n", l);
	free(arr);
	return 0;
}
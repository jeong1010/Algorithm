#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int from, int tmp, int to) {
	int p = from, r = tmp+1, index=0;
	int* tmpArr = (int*)malloc(sizeof(int) * (to - from + 1));
	while (p <= tmp && r <= to) {
		if (arr[p] < arr[r]) {
			tmpArr[index++] = arr[p++];
		}
		else
			tmpArr[index++] = arr[r++];
	}
	while (p <= tmp) {
		tmpArr[index++] = arr[p++];
	}
	while (r <= to) {
		tmpArr[index++] = arr[r++];
	}
	index = 0;
	for (int i = from; i <= to; i++) {
		arr[i] = tmpArr[index++];
	}
	free(tmpArr);
}
void mergeSort(int arr[], int from, int to) {
	if (!(from < to)) return;
	int tmp = (from + to) / 2;
	mergeSort(arr, from, tmp);
	mergeSort(arr, tmp + 1, to);
	merge(arr, from, tmp, to);
}

int main() {
	int* mainArr;
	int n;
	scanf("%d", &n);
	mainArr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &mainArr[i]);
	mergeSort(mainArr, 0, n-1);
	for (int i = 0; i < n; i++)
		printf("%d\n", mainArr[i]);
}
#include <stdio.h>
int partition(int arr[], int p, int r) {
	int x = arr[r];
	int j = p, i = j - 1, tmp;
	for (; j < r; j++) {
		if (arr[j] < x) {
			tmp = arr[++i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	arr[r] = arr[i + 1];
	arr[i + 1] = x;
	return i + 1;
}
void quickSort(int arr[], int p, int r) {
	if (!(p < r)) return;
	int q = partition(arr, p, r);
	quickSort(arr, p, q - 1);
	quickSort(arr, q + 1, r);
}
int main() {
	int a[10];
	int n = 3, t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d", &a[j]);
		}
		quickSort(a, 0, 9);
		printf("%d\n", a[7]);
	}
	return 0;
}
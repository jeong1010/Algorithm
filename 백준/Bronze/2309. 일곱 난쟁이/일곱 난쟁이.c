#include <stdio.h>
void insertionSort(int* arr, int n) {
	if (n == 0) return;
	int cur = arr[n], i;
	for (i = n - 1; i >= 0; i--) {
		if (arr[i] <= cur)
			break;
		else {
			arr[i + 1] = arr[i];
		}
	}
	arr[i+1] = cur;
}
int main() {
	int arr[9];
	int valid[9] = { 0, }; // 0: T, 1: F
	int sum = 0, sub, comp=0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
		insertionSort(arr, i);
	}
	sub = sum - 100;
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (arr[i] + arr[j] == sub) {
				valid[i] = 1, valid[j] = 1;
				comp = 1;
				break;
			}
		}
		if (comp == 1)break;
	}
	for (int i = 0; i < 9; i++) {
		if (valid[i] == 0) printf("%d\n", arr[i]);
	}
	return 0;
}
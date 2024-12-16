#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int delivery(int n) {
	int* arr = (int*)malloc(sizeof(int) * n);
	int cnt, cur;
	memset(arr, -1, sizeof(int) * n);
	arr[2] = 1, arr[4] = 1;

	for (int i = 3; i < n; i++) {
		cnt = 0, cur = i+1;
		cnt += cur / 5;
		cur %= 5;
		cnt += cur / 3;
		cur %= 3;
		if (cur == 0) arr[i] = cnt;

		if (i - 3 >= 0 && arr[i - 3] != -1) {
			arr[i] = ((arr[i] > arr[i - 3] + 1) || (arr[i] == -1)) ? arr[i - 3] + 1 : arr[i];
		}
		
		if (i - 5 >= 0 && arr[i - 5] != -1) {
			arr[i] = ((arr[i] > arr[i - 5] + 1) || (arr[i] == -1)) ? arr[i - 5] + 1 : arr[i];
		}
		
	}
	return arr[n - 1];
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", delivery(n));
	return 0;
}
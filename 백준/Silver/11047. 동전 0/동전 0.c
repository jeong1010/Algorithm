#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, k;
	int* arr;
	int cnt = 0;

	scanf("%d %d", &n, &k);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		cnt += k / arr[i];
		k %= arr[i];
	}
	printf("%d\n", cnt);
    free(arr);
	return 0;
}
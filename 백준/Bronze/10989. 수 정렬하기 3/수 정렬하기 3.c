#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int n, cur;
	int* arr;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * 10000);
	memset(arr, 0, sizeof(int) * 10000);
	for (int i = 0; i < n; i++) {
		scanf("%d", &cur);
		arr[cur-1]++;
	}
	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < arr[i]; j++)
			printf("%d\n", i + 1);
	}
	free(arr);
	return 0;
}
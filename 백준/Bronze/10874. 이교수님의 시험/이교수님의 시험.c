#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j, reIndex=0, isRe=1;
	int* arr;
	int* re;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * 10 * n);
	re = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < 10; j++) {
			scanf("%d", &arr[i * 10 + j]);
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < 10; j++) {
			if (arr[i * 10 + j] != (j % 5 + 1))
			{
				isRe = 0;
				break;
			}
		}
		if(isRe) re[reIndex++] = i + 1;
		isRe = 1;
	}
	for (i = 0; i < reIndex; i++)
		printf("%d\n", re[i]);
	free(re);
	free(arr);
	return 0;
}
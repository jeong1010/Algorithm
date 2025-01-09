#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, cnt=0, con=0;
	int* arr;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] > con) {
			cnt++;
			con = arr[i];
		}
	}
	free(arr);
	printf("%d\n", cnt);
	return 0;
}
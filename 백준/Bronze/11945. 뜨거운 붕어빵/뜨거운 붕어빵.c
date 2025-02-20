#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m;
	int** arr;
	scanf("%d %d", &n, &m);
	arr = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
		arr[i] = (int*)malloc(sizeof(int) * m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			scanf("%1d", &arr[i][j]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j >= 0; j--)
			printf("%d", arr[i][j]);
		printf("\n");
	}

	for (int i = n-1; i >= 0; i--)
		free(arr[i]);
	free(arr);
	return 0;
}
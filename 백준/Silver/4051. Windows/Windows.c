#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m, ic, ir, k = 1, i, j;
	int isw;
	int** arr;

	while (1) {
		scanf(" %d", &n);
		if (n == 0) break;
		arr = (int**)malloc(sizeof(int*) * n);
		
		for (i = 0; i < n; i++)
			arr[i] = (int*)malloc(sizeof(int) * 4);
		
		for (i = 0; i < n; i++) {
			for (j = 0; j < 4; j++) {
				scanf(" %d", &arr[i][j]);
			}
		}

		printf("Desktop %d:\n", k++);

		scanf(" %d", &m);

		for (i = 0; i < m; i++) {
			scanf(" %d %d", &ir, &ic);
			isw = 0;
			for (j = n-1; j >= 0; j--) {
				if (((arr[j][0] <= ir) && (arr[j][0] + arr[j][3] > ir)) && ((arr[j][1] <= ic) && (arr[j][1] + arr[j][2] > ic)))
				{
					printf("window %d\n", j + 1);
					isw = 1;
					break;
				}
			}
			if (!isw) printf("background\n");
		}

		for (i = n - 1; i >= 0; i--)
			free(arr[i]);
		free(arr);
	}
	return 0;
}
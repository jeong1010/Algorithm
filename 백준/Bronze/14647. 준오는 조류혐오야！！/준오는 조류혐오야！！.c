#include <stdio.h>
#include <stdlib.h>
int exist9(int a) {
	if (a / 10 == 0)return a == 9 ? 1 : 0;
	return (a % 10 == 9 ? 1 : 0) + exist9(a / 10);
}
int main() {
	int max=0, all=0, tmp=0;
	int** arr;
	int n, m;
	scanf("%d %d", &n, &m);
	arr = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int) * m);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			scanf("%d", &arr[i][j]);
	}

	// 행
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tmp += exist9(arr[i][j]);
		}
		all += tmp;
		max = max < tmp ? tmp : max;
		tmp = 0;
	}

	// 열
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			tmp += exist9(arr[j][i]);
		}
		// all은 위에서 구함.
		max = max < tmp ? tmp : max;
		tmp = 0;
	}

	printf("%d\n", all - max);

	for (int i = 0; i < n; i++)
		free(arr[i]);
	free(arr);
	return 0;
}
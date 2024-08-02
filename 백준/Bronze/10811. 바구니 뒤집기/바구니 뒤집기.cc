#include <stdio.h>
#include <malloc.h>
int main() {
	int n, m,i,j,k,l;
	int* arr;
	int* tmp;

	scanf("%d %d", &n, &m);
	arr = (int*)malloc(sizeof(int) * n);
	tmp = (int*)malloc(sizeof(int) * n);

	for (k = 0; k < n; k++) {
		arr[k] = k + 1;
	}

	for (k = 0; k < m; k++) {
		scanf("%d %d", &i, &j);
		i = i - 1;
		j = j - 1;
		for (l = 0; l <= j - i; l++) {
			tmp[l] = arr[l + i];
		}
		for (l = 0; l <= j - i; l++) {
			arr[j - l] = tmp[l];
		}
	}

	for (k = 0; k < n; k++) {
		printf("%d ", arr[k]);
	}

	return 0;
}
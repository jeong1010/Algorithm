#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m, i, j, sum = 0;
	int* arr, *sumArr;
	scanf("%d %d", &n, &m);
	arr = (int*)malloc(sizeof(int) * n);
	sumArr = (int*)malloc(sizeof(int) * n);
	for (int k = 0; k < n; k++)
	{
		scanf("%d", &arr[k]);
		if (k == 0) sumArr[k] = arr[k];
		else sumArr[k] = sumArr[k - 1] + arr[k];
	}
	for (int k = 0; k < m; k++) {
		sum = 0;
		scanf("%d %d", &i, &j);
		i--, j--;
		if (j - i >= 50000) 
		{
			sum = sumArr[j];
			i--;
			while (i >= 0)
				sum -= arr[i--];
		}
		else
		{
			while (i <= j) {
				if (i == j) {
					sum += arr[i];
					break;
				}
				sum += arr[i++] + arr[j--];
			}
		}
		printf("%d\n", sum);
	}
	free(arr);
	return 0;
}
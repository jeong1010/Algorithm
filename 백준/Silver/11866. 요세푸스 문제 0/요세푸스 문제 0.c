#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, k;
	int cnt = 1;
	int index = 1;
	int prned = 0;
	int* arr;
	scanf("%d %d", &n, &k);
	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		arr[i] = i + 1;

	printf("<");
	while (prned < n) {
		while (arr[index - 1] == -1)
		{
			index++;
			if (index > n)
				index -= n;
		}
		if (cnt % k == 0)
		{
			printf("%d", arr[index - 1]);
			if (prned != n-1)printf(", ");
			arr[index - 1] = -1;
			prned++;
		}
		cnt++;
		index++;
		if (index > n)
			index -= n;
	}
	printf(">\n");
	free(arr);
	return 0;
}
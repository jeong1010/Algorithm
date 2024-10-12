#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, index, sum;
	int* div;
	while (1) {
		scanf("%d", &n);
		if (n == -1) break;
		index = 0, sum = 0;
		div = (int*)malloc(sizeof(int) * n);
		for (int i = 1; i < n; i++) {
			if (n % i == 0)
			{
				div[index++] = i;
				sum += i;
			}
		}
		div[index] = -1;
		printf("%d ", n);
		if (sum == n) {
			printf("= ");
			for (int j = 0; div[j] != -1; j++)
			{
				printf("%d ", div[j]);
				if (div[j + 1] != -1)
					printf("+ ");
			}
			printf("\n");
		}
		else {
			printf("is NOT perfect.\n");
		}
		free(div);
	}
	return 0;
}
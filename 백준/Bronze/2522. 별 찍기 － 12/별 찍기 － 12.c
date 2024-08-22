#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n * 2 - 1; i++) {
		if (i < n) {
			for (int j = 0; j < n - i - 1; j++)
				printf(" ");
			for (int j = 0; j < i + 1; j++)
				printf("*");
			printf("\n");
		}
		else {
			for (int j = 0; j < i - n + 1; j++)
				printf(" ");
			for (int j = 0; j < 2 * n - i - 1; j++)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}
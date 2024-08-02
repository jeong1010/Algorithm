#include <stdio.h>
// 2444
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 2 * n - 1; i++) {
		if (i < n) {
			for (int j = 0; j < n - i - 1; j++)
				printf(" ");
			for (int j = 0; j < 2 * i + 1; j++)
				printf("*");
		}
		else {
			for (int j = 0; j < i - n + 1; j++)
				printf(" ");
			for (int j = 0; j < 4 * n - 2 * i - 3; j++)
				printf("*");
		}
		printf("\n");
	}
	return 0;
}
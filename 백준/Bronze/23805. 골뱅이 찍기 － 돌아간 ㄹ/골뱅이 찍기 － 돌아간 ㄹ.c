#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n * 5; i++) {
		for (int j = 0; j < n * 5; j++) {
			if (i <= n - 1 && (j <= n * 3 - 1 || j >= n * 4))
				printf("@");
			else if (i >= n * 5 - n && (j <= n * 1 - 1 || j >= n * 3))
				printf("@");
			else if ((j / n) % 2 != 1)
				printf("@");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
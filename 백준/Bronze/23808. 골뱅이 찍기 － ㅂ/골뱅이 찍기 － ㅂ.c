#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 5 * n; i++) {
		if (i / n == 2 || i / n == 4) {
			for (int j = 0; j < 5 * n; j++) {
				printf("@");
			}
			printf("\n");
		}
		else {
			for (int j = 0; j < n; j++)
				printf("@");
			for (int j = 0; j < n * 3; j++)
				printf(" ");
			for (int j = 0; j < n; j++)
				printf("@");
			printf("\n");
		}
	}
	return 0;
}
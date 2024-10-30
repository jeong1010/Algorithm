#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i < n+1; i++) {
		for (int j = 0; j < n-i; j++)
			printf(" ");
		for (int j = 0; j < i * 2 - 1; j++) {
			if (i != n && j != 0 && j != i * 2 - 2)
				printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}
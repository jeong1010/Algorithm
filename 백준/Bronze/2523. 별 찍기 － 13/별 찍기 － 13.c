#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; (i < n ? j < i + 1 : j < 2*n - i - 1); j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
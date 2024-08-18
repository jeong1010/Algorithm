#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n * 2 - 1; i++) {
		for (int j = 0; j < ((i < n) ? i : (n - 1) * 2 - i); j++)
			printf(" ");
		for (int j = 0; j < (i < n ? (n - i) * 2 - 1 : (i - n) * 2 + 3);j++) // 5 - 3 6 -5 7 - 7 2i - 2n + 3
			printf("*");
		printf("\n");
	}
	return 0;
}
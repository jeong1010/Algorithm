#include <stdio.h>
int main() {
	int n;
	do {
		scanf("%d", &n);
		if (n == 0)break;
		printf("%d\n", (n + 1) * n / 2);
	} while (n != 0);
	return 0;
}
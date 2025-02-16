#include <stdio.h>
int main() {
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= 100; i++) {
		if (1 + i + i * i == n)
			break;
	}
	printf("%d\n", i);
	return 0;
}
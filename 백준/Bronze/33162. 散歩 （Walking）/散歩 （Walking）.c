#include <stdio.h>
int main() {
	int a, b, x;
	scanf("%d", &x);
	a = x / 2 * 3;
	b = x / 2 * 2;
	if (x % 2 == 1) a += 3;
	printf("%d\n", a - b);
	return 0;
}
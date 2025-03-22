#include <stdio.h>
int main() {
	int p, b;
	scanf("%d %d", &b, &p);
	b /= 2;
	printf("%d\n", b < p ? b : p);
	return 0;
}
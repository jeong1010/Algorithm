#include <stdio.h>
int main() {
	int a, b, c, d, p, x, y;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &p);

	x = a * p;
	y = p <= c ? b : b + (p - c) * d;

	if (x < y) printf("%d\n", x);
	else printf("%d\n", y);
	return 0;
}
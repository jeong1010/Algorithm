#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 0) {
		a = pow(c, 2) - b;
		printf("%d\n", a);
	}
	else if (b == 0) {
		b = pow(c, 2) - a;
		printf("%d\n", b);
	}
	else if (c == 0) {
		c = sqrt(a + b);
		printf("%d\n", c);
	}
	return 0;
}
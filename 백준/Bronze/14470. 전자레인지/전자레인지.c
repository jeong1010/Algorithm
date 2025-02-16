#include <stdio.h>
int main() {
	int a, b, c, d, e, sum=0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	if (a < 0) {
		sum += (-a * c);
		a = 0;
	}
	if (a == 0) {
		sum += d;
	}
	sum += (b - a) * e;
	printf("%d\n", sum);
	return 0;
}
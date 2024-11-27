#include <stdio.h>
long long int length(long long int n) {
	if (n / 10 == 0)return 1;
	return 1 + length(n / 10);
}
int main() {
	long long int a, b, c, d;
	long long int l1, l2;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	l1 = length(b);
	l2 = length(d);

	for (int i = 0; i < l1; i++) {
		a *= 10;
	}
	a += b;
	for (int i = 0; i < l2; i++) {
		c *= 10;
	}
	c += d;

	printf("%lld\n", a+c);
	return 0;
}
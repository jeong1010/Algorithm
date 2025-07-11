#include <stdio.h>
int main() {
	long long int a, b, sum;
	scanf("%lld %lld", &a, &b);
	sum = (a + b) * (a > b ? a - b + 1 : b - a + 1) / 2;
	printf("%d\n", sum);
	return 0;
}
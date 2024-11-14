#include <stdio.h>
int main() {
	long long int n, sum = 3;
	scanf("%lld", &n);
	sum += (n - 1) * 3;
	sum += n;
	printf("%lld\n", sum);
	return 0;
}
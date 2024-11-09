#include <stdio.h>
long long int fact(long long int n) {
	if (n == 1)return 1;
	return n * fact(n - 1);
}

int main() {
	long long int n;
	scanf("%lld", &n);
	n = fact(n);
	printf("%lld\n", (n / 60 / 60 / 24 / 7));
	return 0;
}
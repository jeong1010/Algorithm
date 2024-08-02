#include <stdio.h>

long long int fac(int i) {
	if (i == 0) return 1;
	return i * fac(i - 1);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld\n", fac(n));
	return 0;
}
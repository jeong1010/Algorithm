#include <stdio.h>
int main() {
	int n;
	long long int a = 1, b = 2, c;
	long long int sum = 4;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		sum += a * 2;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%lld\n", sum);
	return 0;
}
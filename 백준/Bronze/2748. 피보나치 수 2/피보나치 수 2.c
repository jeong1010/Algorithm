#include <stdio.h>
int main() {
	int n;
	long long int a = 0, b = 1, c;
	scanf("%d", &n);
	if (n == 1 || n == 0)
		printf("%d\n", n);
	else{
		for (int i = 1; i < n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		printf("%lld\n", c);
	}
	return 0;
}
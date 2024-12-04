#include <stdio.h>
int main() {
	int n;
	long long int a = 1, b = 3, c;
	scanf("%d", &n);
	if (n == 1)printf("%lld\n", a);
	else if (n == 2) printf("%lld\n", b);
	else {
		for (int i = 2; i < n; i++) {
			if (a*2 + b >= 10007)
				c = (a*2 + b) % 10007;
			else c = a*2 + b;
			a = b;
			b = c;
		}
		printf("%lld\n", c % 10007);
	}
	return 0;
}
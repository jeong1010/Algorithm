#include <stdio.h>
int main() {
	int n, a,b;
	scanf("%d", &n);
	if (n < 100) {
		a = n / 10;
		b = n % 10;
	}
	else if (n < 1000) {
		if (n / 10 > 10) {
			a = n / 100;
			b = n % 100;
		}
		else {
			a = n / 10;
			b = n % 10;
		}
	}
	else {
		a = n / 100;
		b = n % 100;
	}
	printf("%d\n", a + b);
	return 0;
}
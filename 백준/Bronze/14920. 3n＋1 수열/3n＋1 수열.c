#include <stdio.h>
int main() {
	long long int n;
	int cnt = 1;
	scanf("%lld", &n);
	while (n != 1) {
		if (n % 2 == 1)
			n = 3 * n + 1;
		else
			n /= 2;
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
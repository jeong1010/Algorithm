#include <stdio.h>
int main() {
	int n;
	long long int r, c;
	scanf("%lld %lld %d", &r, &c, &n);
	if (r % n == 0)
		r = r / n;
	else
		r = r / n + 1;
	if (c % n == 0)
		c = c / n;
	else
		c = c / n + 1;
	printf("%lld\n",r * c); // 1,000,000,000,000
	return 0;
}
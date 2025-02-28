#include <stdio.h>
int main() {
	int n, m, k;
	int xm, xk, sum = 0;
	scanf("%d %d %d", &n, &m, &k);
	xm = n - m;
	xk = n - k;
	sum += (xm < xk ? xm : xk);
	sum += (m < k ? m : k);
	printf("%d\n", sum);
	return 0;
}
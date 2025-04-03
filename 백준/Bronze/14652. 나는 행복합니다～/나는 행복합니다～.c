#include <stdio.h>
int main() {
	int n, m, k, x,y;
	scanf("%d %d %d", &n, &m, &k);
	y = k / m;
	x = k % m;
	printf("%d %d\n", y, x);
	return 0;
}
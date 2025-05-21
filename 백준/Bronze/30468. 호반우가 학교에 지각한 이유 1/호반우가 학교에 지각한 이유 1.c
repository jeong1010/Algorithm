#include <stdio.h>
int main() {
	int str, dex, int_, luk, n, sum;
	scanf("%d %d %d %d %d", &str, &dex, &int_, &luk, &n);
	sum = str + dex + int_ + luk;
	n = n * 4 - sum;
	printf("%d\n", n < 0 ? 0 : n);
	return 0;
}
#include <stdio.h>
#include <math.h>
int dSum(int n) {
	if (n / 10 == 0) return n;
	return n % 10 + dSum(n / 10);
}
int mNum(int n) {
	if (n / 10 == 0) return 1;
	return 1 + mNum(n / 10);
}
int main() {
	int n, p;
	scanf("%d", &n);
	p = mNum(n);
	if (dSum(n / (int)pow(10, p / 2)) == dSum(n % (int)pow(10, p / 2)))
		printf("LUCKY\n");
	else printf("READY\n");
	return 0;
}
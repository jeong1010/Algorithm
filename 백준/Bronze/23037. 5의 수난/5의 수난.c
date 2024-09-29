#include <stdio.h>
#include <math.h>
int digitSum(int n) {
	if (n / 10 == 0) return pow(n, 5);
	return pow(n % 10, 5) + digitSum(n / 10);
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", digitSum(n));
	return 0;
}
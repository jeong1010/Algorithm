#include <stdio.h>
#include <math.h>
int main() {
	int n;
	int sum1 = 0, sum2 = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum1 += i;
		sum2 += i * i * i;
	}
	printf("%d\n%d\n%d", sum1, (int)pow(sum1, 2), sum2);
	return 0;
}
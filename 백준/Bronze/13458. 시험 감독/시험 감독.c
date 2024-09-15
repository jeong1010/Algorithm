#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int n, b, c, sum=0;
	int* a;
	scanf("%lld", &n);
	a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%lld %lld", &b, &c);
	for (int i = 0; i < n; i++) {
		a[i] -= b;
		if (a[i] < 0) a[i] = 0;
		sum++;
		if (a[i] % c == 0)
			sum += a[i] / c;
		else
			sum += a[i] / c + 1;
	}
	printf("%lld\n", sum);
	return 0;
}
#include <stdio.h>
int main() {
	int t, a, b, tmp, e;
	long long int sum;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		sum = a / b;
		sum = sum * sum;
		printf("%lld\n", sum);
	}
	return 0;
}
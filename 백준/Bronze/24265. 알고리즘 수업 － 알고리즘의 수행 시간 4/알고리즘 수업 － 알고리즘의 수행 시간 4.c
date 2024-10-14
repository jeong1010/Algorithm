#include <stdio.h>
int main() {
	int n;
	long long int sum = 0;
	scanf("%d", &n);
	// 1 -> 0, 2 -> 1, 3 -> 3, 4 -> 6, 5-> 10
	// n^2
	for (int i = 0; i < n; i++)
		sum += i;
	printf("%lld\n", sum);
	printf("%d\n", 2);
	return 0;
}
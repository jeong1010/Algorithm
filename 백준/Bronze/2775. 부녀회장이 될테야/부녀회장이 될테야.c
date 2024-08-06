#include <stdio.h>
int how(int k, int n) {
	int sum = 0;
	if (n == 1) return 1;
	if (k == 1) {
		for (int i = 1; i <= n; i++)
			sum += i;
	}
	else {
		for (int i = 1; i <= n; i++)
			sum += how(k - 1, i);
	}
	return sum;
}
int main() {
	int t, k, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &k);
		scanf("%d", &n);
		printf("%d\n", how(k, n));
	}
	return 0;
}
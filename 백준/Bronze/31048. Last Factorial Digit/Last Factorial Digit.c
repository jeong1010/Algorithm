#include <stdio.h>
int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}
int main() {
	int t, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		printf("%d\n", factorial(n) % 10);
	}
	return 0;
}
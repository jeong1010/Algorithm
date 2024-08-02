#include <stdio.h>

int main() {
	int x;
	int fib[47] = { 0, 1 };
	scanf("%d", &x);
	for (int i = 0; i < x; i++) {
		fib[i + 2] = fib[i] + fib[i + 1];
	}
	printf("%d %d\n", fib[x - 1], fib[x]);
}
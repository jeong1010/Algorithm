#include <stdio.h>

int rectangle(int a, int b) {
	return a * b;
}

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n", rectangle(a, b));
	return 0;
}
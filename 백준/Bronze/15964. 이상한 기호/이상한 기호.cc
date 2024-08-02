#include <stdio.h>
long int atOperate(long int a, long int b) {
	return (a + b) * (a - b);
}

int main() {
	long int a, b;
	scanf("%ld %ld", &a, &b);
	printf("%ld\n", atOperate(a, b));
	return 0;
}
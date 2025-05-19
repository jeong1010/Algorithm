#include <stdio.h>
int main() {
	int a, b, c, d, sum;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	sum = a + d;
	if (b + c < sum) sum = b + c;
	printf("%d\n", sum);
	return 0;
}
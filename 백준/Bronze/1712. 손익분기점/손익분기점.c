#include <stdio.h>
int main() {
	int a, b, c, sum, tmp;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c)printf("%d\n", -1);
	else {
		tmp = c - b;
		sum = a / tmp + 1;
		printf("%d\n", sum);
	}
	return 0;
}
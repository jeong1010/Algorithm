#include <stdio.h>
int main() {
	int n, tmp, a, b, cycle=0;
	scanf("%d", &n);
	tmp = n;
	do {
		a = tmp / 10;
		b = tmp % 10;
		tmp = (a + b) % 10;
		tmp = b * 10 + tmp;
		cycle++;
	}while (tmp != n);

	printf("%d\n", cycle);

	return 0;
}
#include <stdio.h>
int main() {
	int e, f, c, sum = 0;
	scanf("%d %d %d", &e, &f, &c);
	e += f;
	while (e >= c) {
		sum += e / c;
		e = (e % c) + (e / c);
	}
	printf("%d\n", sum);
	return 0;
}
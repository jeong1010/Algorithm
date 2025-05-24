#include <stdio.h>
int main() {
	double n;
	scanf("%lf", &n);
	printf("%d %d", (int)(n * 0.78), (int)(n * 0.8 + n * 0.2 * 0.78));
	return 0;
}
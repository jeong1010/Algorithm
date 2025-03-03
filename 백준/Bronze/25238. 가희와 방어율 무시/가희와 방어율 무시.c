#include <stdio.h>
int main() {
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%d\n", (a - a * (b * 0.01) >= 100 ? 0 : 1));
	return 0;
}
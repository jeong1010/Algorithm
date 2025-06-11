#include <stdio.h>
#include <math.h>
int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%lf\n", 1 / (1 + pow(10, (b - a) / 400)));
	return 0;
}
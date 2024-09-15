#include <stdio.h>
int main() {
	double c, b;
	scanf("%lf %lf", &c, &b);
	printf("%.10lf", c / b);
	return 0;
}
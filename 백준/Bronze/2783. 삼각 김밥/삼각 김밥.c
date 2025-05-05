#include <stdio.h>
int main() {
	int i, n;
	double x, y, inputX, inputY, tmp, min;
	scanf("%lf %lf", &x, &y);
	min = x / y * 1000;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf %lf", &inputX, &inputY);
		tmp = inputX / inputY * 1000;
		if (min > tmp) min = tmp;
	}
	printf("%.2lf\n", min);
	return 0;
}
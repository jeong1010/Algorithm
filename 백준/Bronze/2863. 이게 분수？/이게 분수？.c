#include <stdio.h>
int main() {
	int i, index = -1;
	float a, b, c, d, sum = 0;
	float max = 0, tmp;
	scanf("%f %f", &a, &b);
	scanf("%f %f", &c, &d);
	for (i = 0; i < 4; i++) {
		sum = a / c + b / d;
		if (sum > max) {
			max = sum;
			index = i;
		}
		tmp = d;
		d = b;
		b = a;
		a = c;
		c = tmp;
	}
	printf("%d\n", index);
	return 0;
}
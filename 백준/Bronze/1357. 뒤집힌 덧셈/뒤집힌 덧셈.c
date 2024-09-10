#include <stdio.h>
#include <math.h>
int rev(int x) {
	int degree = -1, coef, value = 0, p = 1;
	int tmp = x;
	while (tmp > 0) {
		tmp /= 10;
		degree++;
	}
	while (x > 0) {
		coef = x / pow(10, degree);
		value += coef * p;
		p *= 10;
		x %= (int)pow(10, degree);
		degree -= 1;
	}
	return value;
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", rev(rev(x) + rev(y)));
	return 0;
}
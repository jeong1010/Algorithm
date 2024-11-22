#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (c > a)
		{
			if (c >= a + b) c = a + b - 1;
		}
		else {
			if (a >= c + b) a = c + b - 1;
		}
	}
	else {
		if (c > b)
		{
			if (c >= a + b) c = a + b - 1;
		}
		else {
			if (b >= a + c) b = a + c - 1;
		}
	}

	printf("%d\n", a + b + c);

	return 0;
}
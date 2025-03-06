#include <stdio.h>
#include <math.h>
int main() {
	int f, b, n;
	short su = 0;
	scanf("%2d%2d", &f, &b);
	n = f * 100 + b;
	for (int i = n + 1; i <= 9999; i++) {
		f = i / 100;
		b = i % 100;
		if (pow((f + b), 2) == i)
		{
			printf("%d\n", i);
			su = 1;
			break;
		}
	}
	if (!su) printf("%d\n", -1);
	return 0;
}
#include <stdio.h>
int main() {
	int a, b, c;
	int tmpA, tmpB, ab, cnt=1;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	tmpA = a;
	tmpB = b;
	while (tmpB / 10 != 0) {
		tmpB /= 10;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		tmpA *= 10;
	}
	ab = tmpA + b;

	printf("%d\n", a + b - c);
	printf("%d\n", ab - c);

	return 0;
}
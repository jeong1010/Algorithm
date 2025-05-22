#include <stdio.h>
int main() {
	int d, h, m, sum = 0;
	scanf("%d %d %d", &d, &h, &m);
	if (d == 11) {
		if (h < 11 || (h == 11 && m < 11)) {
			printf("-1\n");
			return 0;
		}
	}
	sum += (d - 11) * 24 * 60 + (h - 11) * 60 + (m - 11);
	printf("%d\n", sum);
	return 0;
}
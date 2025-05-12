#include <stdio.h>
int main() {
	int n, a, g, d, max = -1, tmp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &d, &g);
		tmp = a * (d + g);
		if (a == d + g) tmp *= 2;
		if (tmp > max) max = tmp;
	}
	printf("%d\n", max);
	return 0;
}
#include <stdio.h>
int main() {
	int n, h, b, k, sum = 0, tmp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &h, &b, &k);
		tmp = b - h;
		if (tmp > 0) sum += tmp * k;
	}
	printf("%d\n", sum);
	return 0;
}
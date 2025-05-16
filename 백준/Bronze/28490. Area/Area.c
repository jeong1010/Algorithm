#include <stdio.h>
int main() {
	int n, i1, i2, max = -1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &i1, &i2);
		if (i1 * i2 > max) max = i1 * i2;
	}
	printf("%d\n", max);
	return 0;
}
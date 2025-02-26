#include <stdio.h>
int main() {
	int a, d, k;
	scanf("%d %d %d", &a, &d, &k);
	// a + nd = k
	if ((k - a) % d == 0 && (k - a) / d >= 0) printf("%d\n", (k - a) / d + 1);
	else printf("X\n");
	return 0;
}
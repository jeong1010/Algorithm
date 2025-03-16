#include <stdio.h>
int main() {
	int a[3], b[3], c[3];
	for (int i = 0; i < 3; i++) scanf("%d", &a[i]);
	for (int i = 0; i < 3; i++) scanf("%d", &c[i]);
	b[0] = c[0] - a[2];
	b[1] = c[1] / a[1];
	b[2] = c[2] - a[0];
	printf("%d %d %d\n", b[0], b[1], b[2]);
	return 0;
}
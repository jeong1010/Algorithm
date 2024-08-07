#include <stdio.h>
int hu(int x, int y) {
	if (x % y != 0)
		return x / y + 1;
	else return x / y;
}
int main() {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	printf("%d\n", hu(v-b,a-b));
	return 0;
}
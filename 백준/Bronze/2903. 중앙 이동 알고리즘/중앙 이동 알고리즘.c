#include <stdio.h>
int main() {
	int n, v=4, l=2;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		l += l - 1;
		v = l * l;
	}
	printf("%d\n", v);
	return 0;
}
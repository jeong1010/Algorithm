#include <stdio.h>
int main() {
	int n, s, e;
	while (1) {
		e = scanf("%d %d", &n, &s);
		if (e == EOF) break;
		printf("%d\n", s / ++n);
	}
	return 0;
}
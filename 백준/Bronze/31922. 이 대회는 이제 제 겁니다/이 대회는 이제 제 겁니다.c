#include <stdio.h>
int main() {
	int a, p, c;
	scanf("%d %d %d", &a, &p, &c);
	printf("%d\n", a + c > p ? a + c : p);
	return 0;
}
#include <stdio.h>
int main() {
	int h, m;
	int* s;
	scanf("%d %d", &h, &m);
	s = (h > m ? &m : &h);
	printf("%d\n", (*s) * 100 / 2);
	return 0;
}
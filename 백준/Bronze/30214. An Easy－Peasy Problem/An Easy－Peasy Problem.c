#include <stdio.h>
int main() {
	int s1, s2;
	scanf("%d %d", &s1, &s2);
	printf("%c\n", (s2 - s1 > s1) ? 'H' : 'E');
	return 0;
}
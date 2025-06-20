#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b == c)
		printf("correct!\n");
	else
		printf("wrong!\n");
	return 0;
}
#include <stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	printf("%d\n", x % 7 == 2 ? 1 : 0);	
	return 0;
}
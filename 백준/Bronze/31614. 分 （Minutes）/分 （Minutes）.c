#include <stdio.h>
int main() {
	short h, m;
	scanf("%hd", &h);
	scanf("%hd", &m);
	printf("%d\n", (h * 60 + m));
}
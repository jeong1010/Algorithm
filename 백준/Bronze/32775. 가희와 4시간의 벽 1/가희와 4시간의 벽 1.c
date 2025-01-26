#include <stdio.h>
int main() {
	int s, f;
	scanf("%d", &s);
	scanf("%d", &f);
	if (f < s)printf("flight\n");
	else printf("high speed rail\n");
	return 0;
}
#include <stdio.h>
int main() {
	int ck, c, b, sum = 0;
	scanf("%d", &ck);
	scanf("%d %d", &c, &b);
	sum += b;
	sum += c / 2;
	if (sum > ck)printf("%d\n", ck);
	else printf("%d\n", sum);
	return 0;
}
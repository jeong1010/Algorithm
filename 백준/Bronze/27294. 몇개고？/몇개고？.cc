#include <stdio.h>
int main() {
	int t, s;
	scanf("%d %d", &t, &s);
	if (t >= 12 && t <= 16 && s == 0)
		printf("%d\n", 320);
	else printf("%d\n", 280);
	return 0;
}
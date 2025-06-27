#include <stdio.h>
int main() {
	int m, n;
	scanf("%d %d", &n, &m);
	if (m == 1 || m == 2) printf("NEWBIE!\n");
	else if (m <= n) printf("OLDBIE!\n");
	else printf("TLE!\n");
	return 0;
}
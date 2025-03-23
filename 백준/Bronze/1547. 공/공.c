#include <stdio.h>
int main() {
	int m, x, y;
	int b1 = 1, b2 = 0, b3 = 0;
	int* cup[3] = { &b1, &b2, &b3 };
	int* tmp;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &x, &y);
		tmp = cup[x - 1];
		cup[x - 1] = cup[y - 1];
		cup[y - 1] = tmp;
	}
	if (*cup[0] == 1)printf("1\n");
	else if (*cup[1] == 1)printf("2\n");
	else if (*cup[2] == 1)printf("3\n");
	else printf("-1\n");
	return 0;
}
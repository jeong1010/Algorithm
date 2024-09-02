#include <stdio.h>
int main() {
	int y1, m1, d1, y2, m2, d2;
	int my=0, sy=1, yy=0;
	scanf("%d %d %d", &y1, &m1, &d1);
	scanf("%d %d %d", &y2, &m2, &d2);
	for (int i = y1; i < y2; i++)
	{
		sy++;
		if (m2 > m1 || m2 == m1 && d2 >= d1) // 그해 생일 지났으면
			my++;
	}
	if (!(m2 > m1 || m2 == m1 && d2 >= d1) && y2 - y1 > 1) // 생일 값은 적은데 년도상 이미 지나감
		my += y2 - y1 - 1;
	yy = y2 - y1;

	printf("%d\n%d\n%d\n", my, sy, yy);
	return 0;
}
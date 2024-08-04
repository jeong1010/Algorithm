#include <stdio.h>
int main() {
	int x, y, w, h;
	int min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	min = x - 0;
	if (w - x < min) min = w - x;
	if (y - 0 < min) min = y - 0;
	if (h - y < min) min = h - y;
	printf("%d\n", min);
	return 0;
}
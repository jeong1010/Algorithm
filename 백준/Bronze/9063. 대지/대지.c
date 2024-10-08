#include <stdio.h>
int main() {
	int n, x, y, maxX=-10000, maxY=-10000, minX=10000, minY=10000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		if (x > maxX) maxX = x;
		if (y > maxY)maxY = y;
		if (x < minX)minX = x;
		if (y < minY)minY = y;
	}
	printf("%d\n", (maxX - minX) * (maxY - minY));
	return 0;
}
#include <stdio.h>
int main() {
	double maxX = -1001, maxY = -1001, minX = 1001, minY = 1001, input1, input2, m,h;
	int t, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		maxX = -1001, maxY = -1001, minX = 1001, minY = 1001;
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%lf %lf", &input1, &input2);
			if (input1 > maxX) maxX = input1;
			if (input1 < minX) minX = input1;
			if (input2 > maxY) maxY = input2;
			if (input2 < minY) minY = input2;
		}
		m = maxX - minX;
		h = maxY - minY;
		printf("Case %d: Area %lf, Perimeter %lf\n", i + 1, m * h, (m * 2 + h * 2));
	}
	return 0;
}
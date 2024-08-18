#include <stdio.h>

int main() {
	int x[3];
	int y[3];
	int xx, yy;
	for (int i = 0; i < 2; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	scanf("%d %d", &x[2], &y[2]);
	xx = x[2], yy = y[2];
	for (int i = 0; i < 2; i++) {
		if (x[2] == x[i]) xx = (i == 0 ? x[1]: x[0]);
		if (y[2] == y[i]) yy = (i == 0 ? y[1] : y[0]);
	}
	printf("%d %d\n", xx, yy);
	return 0;
}
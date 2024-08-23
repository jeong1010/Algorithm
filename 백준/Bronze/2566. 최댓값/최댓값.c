#include <stdio.h>
int main() {
	int max = -1, maxR = 0, maxC = 0;
	int n;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &n);
			if (n > max) {
				max = n;
				maxC = i + 1;
				maxR = j + 1;
			}
		}
	}
	printf("%d\n%d %d", max, maxC, maxR);
	return 0;
}
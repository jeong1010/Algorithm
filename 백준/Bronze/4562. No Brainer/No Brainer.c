#include <stdio.h>
int main() {
	int n;
	int x, y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		if (x >= y) printf("MMM BRAINS\n");
		else printf("NO BRAINS\n");
	}
	return 0;
}
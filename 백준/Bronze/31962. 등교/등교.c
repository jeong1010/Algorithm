#include <stdio.h>
int main() {
	int n, x, s, t, max = -1;
	scanf("%d %d", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &s, &t);
		if (s + t <= x && max < s) max = s;
	}
	printf("%d\n", max);
	return 0;
}
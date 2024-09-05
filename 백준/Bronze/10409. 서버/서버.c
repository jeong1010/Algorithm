#include <stdio.h>
int main() {
	int n, t, tmp, cnt = 0;
	int isFull = 0;
	scanf("%d %d", &n, &t);
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		if (t - tmp < 0) isFull = 1;
		if (!(isFull)) {
			t -= tmp;
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
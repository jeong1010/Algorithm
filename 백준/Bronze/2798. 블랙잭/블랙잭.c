#include <stdio.h>
int main() {
	int n, m, near = 0, i, j, k, abssub, tmp;
	int card[100];
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}
	abssub = m;
	for (i = 0; i < n - 2; i++) {
		for (j = i + 1; j < n - 1; j++) {
			for (k = j+1; k < n; k++) {
				tmp = card[i] + card[j] + card[k];
				if (tmp <= m && m - tmp < abssub) {
					near = tmp;
					abssub = m - tmp;
				}
			}
		}
	}
	printf("%d\n", near);
	return 0;
}
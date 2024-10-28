#include <stdio.h>
int howZero(int n) {
	if (n / 10 == 0) return (n == 0 ? 1 : 0);
	return (n % 10 == 0 ? 1 : 0) + howZero(n / 10);
}

int main() {
	int t, n, m;
	int cnt;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &m);
		cnt = 0;
		for(int j=n;j<=m;j++)
			cnt += howZero(j);
		printf("%d\n", cnt);
	}
	return 0;
}
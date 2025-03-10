#include <stdio.h>
int main() {
	int t, s, n, q, p, sum=0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &s);
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d %d", &q, &p);
			sum += p * q;
		}
		sum += s;
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}
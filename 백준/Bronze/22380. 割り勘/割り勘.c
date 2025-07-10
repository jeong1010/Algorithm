#include <stdio.h>
int main() {
	int n, m, sum, sub, input;
	while (1) {
		scanf(" %d %d", &n, &m);
		if (n == 0 && m == 0) break;

		sub = m / n;
		sum = 0;

		for (int i = 0; i < n; i++) {
			scanf(" %d", &input);
			sum += input >= sub ? sub : input;
		}

		printf("%d\n", sum);
	}
	return 0;
}
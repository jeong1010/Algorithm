#include <stdio.h>
int main() {
	int n, m;
	int sum = 0, min=10000, isP;
	scanf("%d", &m);
	scanf("%d", &n);
	for (; m <= n; m++) {
		if (m == 1)continue;
		isP = 1;
		for (int i = 2; i < m; i = (i == 2 ? 3 : i + 2)) {
			if (m % i == 0){
				isP = 0;
				break;
			}
		}
		if (isP) {
			sum += m;
			if (m < min)
				min = m;
		}
	}
	if (sum == 0) printf("%d\n", -1);
	else printf("%d\n%d\n", sum, min);
	return 0;
}
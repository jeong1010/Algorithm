#include <stdio.h>
int cal_sum(int n) {
	int sum = n;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main() {
	int n, sum, isComplete = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum = cal_sum(i);
		if (sum == n) {
			printf("%d\n", i);
			isComplete = 1;
			break;
		}
	}
	if (!isComplete) printf("%d\n", 0);
}
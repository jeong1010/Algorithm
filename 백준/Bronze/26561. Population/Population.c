#include <stdio.h>
int main() {
	int n;
	unsigned int p, t, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%u %u", &p, &t);
		sum = p;
		sum += t / 4;
		sum -= t / 7;
		printf("%u\n", sum);
	}
	return 0;
}
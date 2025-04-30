#include <stdio.h>
#include <math.h>
int main() {
	int n, i, so, de;
	long long int sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &de);
		if (i == 0) {
			so = de;
			continue;
		}
		sum += pow((de - so), 2);
		so = de;
	}
	printf("%lld\n", sum);
	return 0;
}
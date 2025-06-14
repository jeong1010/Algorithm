#include <stdio.h>
#include <string.h>
int main() {
	int a, b, t, sum = 0, max = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf(" %d %d", &a, &b);
		sum -= a;
		sum += b;
		if (max < sum) max = sum;
	}
	printf("%d\n", max);
	return 0;
}
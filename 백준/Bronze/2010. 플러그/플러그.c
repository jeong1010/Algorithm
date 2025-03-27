#include <stdio.h>
int main() {
	int n, input, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		sum += input;
	}
	sum -= n-1;
	printf("%d\n", sum);
	return 0;
}
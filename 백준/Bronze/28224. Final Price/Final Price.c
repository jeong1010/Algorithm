#include <stdio.h>
int main() {
	int n, sum=0, input;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		sum += input;
	}
	printf("%d\n", sum);
	return 0;
}
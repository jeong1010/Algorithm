#include <stdio.h>
int main() {
	int n, input, sum = 0, cur = 1;
	int arr[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		if (input == 1) {
			sum += cur++;
		}
		else cur = 1;
	}
	printf("%d\n", sum);
	return 0;
}
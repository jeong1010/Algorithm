#include <stdio.h>
int main() {
	int sum, input;
	scanf("%d", &sum);
	for (int i = 0; i < 9; i++) {
		scanf("%d", &input);
		sum -= input;
	}
	printf("%d\n", sum);
	return 0;
}
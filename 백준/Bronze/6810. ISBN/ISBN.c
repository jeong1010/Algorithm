#include <stdio.h>
int main() {
	int input;
	int sum = (9 + 8 + 9 + 1 + 1) + (7 + 0 + 2 + 4 + 8) * 3;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &input);
		sum += input * (i % 2 == 0 ? 1 : 3);
	}
	printf("The 1-3-sum is %d\n", sum);
	return 0;
}
#include <stdio.h>
int main() {
	int input, sum=0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &input);
		sum += input;
	}
	printf("%d\n", sum <= 21 ? 1 : 0);
	return 0;
}
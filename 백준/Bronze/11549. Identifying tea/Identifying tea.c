#include <stdio.h>
int main() {
	int input, t, sum=0;
	scanf("%d", &t);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &input);
		if (input == t)sum++;
	}
	printf("%d", sum);
	return 0;
}
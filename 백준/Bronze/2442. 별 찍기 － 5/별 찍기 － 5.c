#include <stdio.h>
int main() {
	int i, j;
	int num;
	scanf("%d", &num);
	num++;
	for (i = 1; i < num; i++) {
		for (j = 0; j < num - i - 1; j++)
			printf(" ");
		for (j = 0; j < i * 2 - 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
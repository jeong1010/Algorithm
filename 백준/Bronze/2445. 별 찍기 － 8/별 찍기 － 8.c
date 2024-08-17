#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n * 2 - 1; i++) {
		if(i < n)
		{
			for (int j = 0; j < i + 1; j++)
				printf("*");
			for (int j = 0; j < n*2-(i+1)*2; j++)
				printf(" ");
			for (int j = 0; j < i + 1; j++)
				printf("*");
		}
		else {
			for (int j = 0; j < n * 2 - (i + 1); j++)
				printf("*");
			for (int j = 0; j < (i + 1 - n) * 2; j++)
				printf(" ");
			for (int j = 0; j < n * 2 - (i + 1); j++)
				printf("*");
		}
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 5 * n; i++) {
		if(i >= 0 && i < n)
		{
			for (int j = 0; j < 5 * n; j++)
			{
				printf("@");
			}
		}
		else {
			for (int j = 0; j < n; j++)
			{
				printf("@");
			}
		}
		printf("\n");
	}
	return 0;
}
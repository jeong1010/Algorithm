#include <stdio.h>
int main() {
	int t, n, tmp;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		tmp = n / 5;
		n %= 5;
		for (int j = 0; j < tmp; j++)
			printf("++++ ");
		for (int j = 0; j < n; j++)
			printf("|");
		printf("\n");
	}
	return 0;
}
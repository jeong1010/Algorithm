#include <stdio.h>
void rowPrn(int n, int i) {
	static int cnt = 0;
	if (i == 0 || i == n * 2 - 2) // 맨 앞 or 맨 뒤
		for (int j = 0; j < n; j++)
			printf("*");
	else {
			printf("*");
			for (int j = 0; j < n - 2; j++)
				printf(" ");

			if (i != n - 1 || cnt == 1)
				printf("*");
			else
				cnt++;
	}
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < (i < n ? i : (n - 1) * 2 - i); j++)
			printf(" ");
		rowPrn(n, i);
		for (int j = 0; j < (i < n ? 2 * (n - i - 1) - 1 : (i - n + 1) * 2 - 1); j++)
			printf(" ");
		rowPrn(n, i);
		printf("\n");
	}
	return 0;
}
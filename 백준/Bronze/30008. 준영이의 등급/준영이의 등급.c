#include <stdio.h>
int main() {
	int n, k, p;
	int calc[17];
	scanf("%d %d", &n, &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &calc[i]);
		calc[i] = calc[i] * 100 / n;
	}
	for (int i = 0; i < k; i++) {
		if (calc[i] >= 0 && calc[i] <= 4) printf("1 ");
		else if (calc[i] <= 11) printf("2 ");
		else if (calc[i] <= 23) printf("3 ");
		else if (calc[i] <= 40) printf("4 ");
		else if (calc[i] <= 60) printf("5 ");
		else if (calc[i] <= 77) printf("6 ");
		else if (calc[i] <= 89) printf("7 ");
		else if (calc[i] <= 96) printf("8 ");
		else if (calc[i] <= 100) printf("9 ");
	}
	printf("\n");
	return 0;
}
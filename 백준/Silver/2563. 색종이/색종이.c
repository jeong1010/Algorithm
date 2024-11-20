#include <stdio.h>
int main() {
	int paper[100][100] = { {0,0}, };
	int n, n1, n2, ol=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &n1, &n2);
		for (int j = n1; j < n1 + 10; j++) {
			for (int k = n2; k < n2 + 10; k++) {
				paper[j][k]++;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] > 0)ol++;
		}
	}
	printf("%d\n", ol);
	return 0;
}
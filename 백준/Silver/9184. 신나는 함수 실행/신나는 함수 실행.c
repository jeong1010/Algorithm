#include <stdio.h>
int main() {
	int arr[21][21][21];
	int a, b, c;
	int res;
	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (a == -1 && b == -1 && c == -1)
			break;
		for (int i = 0; i < 21; i++) {
			for (int j = 0; j < 21; j++) {
				for (int k = 0; k < 21; k++) {
					if (i <= 0 || j <= 0 || k <= 0)
						arr[i][j][k] = 1;
					else if (i < j && j < k)
						arr[i][j][k] = arr[i][j][k - 1] + arr[i][j - 1][k - 1] - arr[i][j - 1][k];
					else {
						arr[i][j][k] = arr[i - 1][j][k] + arr[i - 1][j-1][k] + arr[i - 1][j][k - 1] - arr[i-1][j-1][k-1];
					}
				}
			}
		}
		if (a <= 0 || b <= 0 || c <= 0) res = arr[0][0][0];
		else if (a > 20 || b > 20 || c > 20) res = arr[20][20][20];
		else {
			res = arr[a][b][c];
		}
		printf("w(%d, %d, %d) = %d\n", a, b, c, res);
	}
	return 0;
}
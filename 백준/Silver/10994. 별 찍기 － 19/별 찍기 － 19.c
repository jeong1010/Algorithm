#include <stdio.h>
void star(int n, int i, int mRow) {
	if (n == 1) { printf("*"); return; }

	if (i == 0 || i == mRow - 1) {
		for (int j = 0; j < mRow; j++)
				printf("*");
	}
	else {
		printf("* ");
		if (i == 1 || i == mRow - 2) {
			for (int j = 0; j < mRow - 4; j++)
				printf(" ");
		}
		else {
			star(n - 1,i - 2, mRow - 4);
		}
		printf(" *");
	}
}

int main() {
	int n;
	int mRow = 1;
	
	scanf("%d", &n);

	for (int i = 1; i < n; i++)
		mRow += 4;

	for (int i = 0; i < mRow; i++)
	{
		star(n, i, mRow);
		printf("\n");
	}
	return 0;
}
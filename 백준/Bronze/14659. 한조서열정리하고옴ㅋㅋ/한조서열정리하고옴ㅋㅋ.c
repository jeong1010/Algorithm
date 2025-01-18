#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int maxStart=0, maxCnt=0, cnt;
	int* b;
	scanf("%d", &n);
	b = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);

	for (int i = 0; i < n; i++) {
		if (maxStart < b[i])
			maxStart = b[i];
		else continue;

		cnt = 0;

		for (int j = i+1; j < n; j++) {
			if (b[i] < b[j])
				break;
			else
				cnt++;
		}

		if (cnt > maxCnt) maxCnt = cnt;
	}

	printf("%d\n", maxCnt);

	free(b);
	return 0;
}
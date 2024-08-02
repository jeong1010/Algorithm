#include <stdio.h>
int hotel(int h, int w, int n) {
	int i, j;
	if (n % h == 0) i = h;
	else i = n % h;
	j = (n+h-1) / h;

	return i * 100 + j;
}

int main() {
	int t, h, w, n;
	int roomNum;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);
		roomNum = hotel(h, w, n);
		printf("%d\n", roomNum);
	}
	return 0;
}
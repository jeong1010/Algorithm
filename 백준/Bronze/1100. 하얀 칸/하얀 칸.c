#include <stdio.h>
int main() {
	char pan[8][9];
	int odd = 1, cnt = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%s", pan[i]);
	}
	for (int i = 0; i < 8; i++) {
		for (int j = (odd?0:1); j < 8; j += 2)
			if (pan[i][j] == 'F')cnt++;
		odd = !odd;
	}
	printf("%d\n", cnt);
	return 0;
}
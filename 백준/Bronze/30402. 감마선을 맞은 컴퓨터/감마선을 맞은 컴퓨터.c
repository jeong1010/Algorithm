#include <stdio.h>
int main() {
	char img[15][15];
	char isEnd = 0;
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			scanf(" %c", &img[i][j]);
		}
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (img[i][j] == 'w') {
				printf("chunbae\n");
				isEnd = 1;
				break;
			}
			else if (img[i][j] == 'b') {
				printf("nabi\n");
				isEnd = 1;
				break;
			}
			else if (img[i][j] == 'g') {
				printf("yeongcheol\n");
				isEnd = 1;
				break;
			}
		}
		if (isEnd == 1)
			break;
	}
	return 0;
}
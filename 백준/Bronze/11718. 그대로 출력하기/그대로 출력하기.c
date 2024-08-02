#include <stdio.h>
int main() {
	char text[101];
	int n = 0;
	// scanf는 공백 포함이 안 됨
	while (gets(text) != NULL && n < 100) {
		printf("%s\n", text);
		n++;
	}
	return 0;
}
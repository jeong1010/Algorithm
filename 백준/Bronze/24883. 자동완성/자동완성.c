#include <stdio.h>
int main() {
	char c;
	scanf("%c", &c);
	if (c == 'n' || c == 'N') printf("Naver D2\n");
	else printf("Naver Whale\n");
	return 0;
}
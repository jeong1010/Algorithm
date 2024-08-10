#include <stdio.h>
#include <string.h>
void prnReverse(char* c) {
	if (*c == '\0') return;
	prnReverse(c + 1);
	printf("%c", *c);
}
int main() {
	char s[501];
	while (1) {
		scanf(" %[^\n]s", s);
		if (strcmp(s, "END") == 0)
			break;
		prnReverse(s);
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
int main() {
	char s[33], len = 0, udb = 0;
	scanf("%s", s);
	for (; s[len] != '\0'; len++) {
		if (s[len] == '_') udb++;
	}
	printf("%d\n", len + 2 + udb * 5);
	return 0;
}
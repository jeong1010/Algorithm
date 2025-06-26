#include <stdio.h>
int main() {
	char s[8];
	scanf("%s", &s);
	if (s[0] == '5' && s[1] == '5' && s[2] == '5')
		printf("YES\n");
	else printf("NO\n");
	return 0;
}
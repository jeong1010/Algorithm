#include <stdio.h>
#include <string.h>
// 10988
int main() {
	char str[101];
	char newStr[101];
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		newStr[strlen(str) - i - 1] = str[i];
	}
	newStr[strlen(str)] = '\0';
	//printf("%s\n", newStr);
	if (strcmp(str, newStr) == 0)printf("1\n");
	else printf("0\n");
	return 0;
}
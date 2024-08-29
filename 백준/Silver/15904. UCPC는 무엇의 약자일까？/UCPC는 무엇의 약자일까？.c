#include <stdio.h>
#include <string.h>
int main() {
	char str[1001];
	char ucpc[5] = "UCPC";
	char sStr[5];
	int index = 0;
	scanf("%[^\n]s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90 && (str[i] == ucpc[index]))
			sStr[index++] = str[i];
		if (index == 4) break;
	}
	sStr[4] = '\0';

	if (strcmp(sStr, ucpc) == 0) printf("I love UCPC\n");
	else printf("I hate UCPC\n");
	return 0;
}
#include <stdio.h>
#include <string.h>
int main() {
	char bp[51];
	char result[51] = "";
	int cnt = 0, i = 0;
	int isComplete = 1;
	scanf("%s", &bp);
	while (1) {
		while ((bp[i] != '.') && (bp[i] != '\0')) {
			cnt++;
			i++;
		}
		while (cnt != 0) {
			if (cnt % 2 != 0) {
				isComplete = 0;
				break;
			}
			while (cnt - 4 > -1) {
				strcat(result, "AAAA");
				cnt -= 4;
			}
			if (cnt - 2 == 0) {
				strcat(result, "BB");
				cnt -= 2;
			}
		}
		if (bp[i] == '.') strcat(result, ".");
		if (bp[i] == '\0') break;
		i++;
	}
	if (isComplete)
		printf("%s\n", result);
	else printf("-1");
	return 0;
}
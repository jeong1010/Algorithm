#include <stdio.h>
#include <stdlib.h>
int main() {
	char* str = (char*)malloc(sizeof(char) * 1000000);
	int cnt[26] = {0, };
	int max = -1, maxIndex = -1, i, isDupli=0;
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a')
			cnt[str[i] - 'a']++;
		else if(str[i] >= 'A')
			cnt[str[i] - 'A']++;
	}
	free(str);
	for (i = 0; i < 26; i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			maxIndex = i;
			isDupli = 0;
		}
		else if (cnt[i] == max) {
			isDupli = 1;
		}
	}
	if (isDupli)printf("?\n");
	else printf("%c\n", maxIndex + 'A');
	return 0;
}
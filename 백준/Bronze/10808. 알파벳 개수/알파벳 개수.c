#include <stdio.h>
#include <string.h>
int main() {
	char s[101];
	int ab[26] = { 0, };
	scanf("%s", s);
	for (int i = 0;i<strlen(s);i++) {
		ab[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", ab[i]);
	}
	printf("\n");
	return 0;
}
#include <stdio.h>
#include <string.h>
int main() {
	char s[51];
	int start = 0, end;
	scanf("%[^\n]s", s);
	end = strlen(s) - 1;
	if ((s[start] != '\"') || (s[end] != '\"') || (start+1 == end) || (start == end)) {
		printf("CE\n");
	}
	else {
		for (int i = start + 1; i < end; i++) printf("%c", s[i]);
	}
	printf("\n");
	return 0;
}
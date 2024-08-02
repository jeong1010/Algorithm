#include <stdio.h>
#define MAX_SIZE 1000000
int main() {
	int cnt;
	char text[MAX_SIZE];
	scanf("%[^\n]s", text);
	if (text[0] == ' ')cnt = 0;
	else cnt = 1;
	for (int i = 0; text[i+1] != '\0'; i++) {
		if (text[i] == ' ' && text[i+1] != ' ') cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
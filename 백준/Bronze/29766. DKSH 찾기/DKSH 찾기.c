#include <stdio.h>
#include <string.h>
int main() {
	char str[1000];
	int cnt = 0;
	scanf("%s", str);

	for (int i = 0; i < strlen(str) - 3; i++) {
		if (str[i] == 'D' && str[i + 1] == 'K' && str[i + 2] == 'S' && str[i + 3] == 'H') cnt++;
	}

	printf("%d\n", cnt);
	return 0;
}
#include <stdio.h>
#include <string.h>
int isSame5(char* str1, char* str2) {
	for (int i = 0; i < 5; i++) {
		if (str1[i] != str2[i]) return 0;
	}
	return 1;
}

int main() {
	char code1[11];
	char input[11];
	int n, cnt=0;
	scanf("%s", code1);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", input);
		cnt += isSame5(code1, input);
	}

	printf("%d\n", cnt);
	return 0;
}
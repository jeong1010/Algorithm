#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, max = 0, cnt;
	char* str;
	scanf("%d", &n);
	str = (char*)malloc(sizeof(char) * n);
	scanf(" %[^\n]s", str);
	for (char c = 'a'; c <= 'z'; c++) {
		cnt = 0;
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] == c)cnt++;
		}
		if (cnt > max) max = cnt;
	}
	printf("%d\n", max);
	//free(str);
	return 0;
}
#include <stdio.h>
int main() {
	char txt[101];
	char ans[101];
	int index = 0;
	scanf("%s", txt);
	ans[index++] = txt[0];
	for (int i = 1; txt[i] != '\0'; i++) {
		if (txt[i] >= 'A' && txt[i] <= 'Z' && txt[i - 1] == '-') {
			ans[index++] = txt[i];
		}
	}
	ans[index] = '\0';
	printf("%s\n", ans);
	return 0;
}
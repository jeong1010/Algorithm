#include <stdio.h>
int main() {
	char str[101];
	int n;
	scanf("%d", &n);
	scanf("%s", str);
	for (int i = 0; i < n - 1; i++) {
		if (str[i + 1] == 'J') printf("%c\n", str[i]);
	}
	return 0;
}
#include <stdio.h>
int main() {
	char txt[101];
	int cnt = 0;
	scanf("%s", txt);
	for (int i = 0; txt[i] != '\0'; i++) {
		switch (txt[i]) {
		case 'a': case 'e': case 'i': case 'o': case 'u':
			cnt++;
			break;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
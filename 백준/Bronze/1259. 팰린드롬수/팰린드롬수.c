#include <stdio.h>
#include <string.h>
int main() {
	int t, len, isP=1, i=0;
	char s[100000];
	while (1) {
		scanf("%d", &t);
		if (t == 0) break;
		sprintf(s, "%d", t);
		len = strlen(s) -1;

		while(i < len) {
			if (s[i] != s[len]) {
				isP = 0;
				break;
			}
			i++;
			len--;
		}

		if (isP) printf("yes\n");
		else printf("no\n");
		i = 0;
		isP = 1;
	}
	return 0;
}
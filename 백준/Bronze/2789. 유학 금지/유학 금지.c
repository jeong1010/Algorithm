#include <stdio.h>
int main() {
	char str[101];
	scanf("%s", str);
	for (int i = 0; str[i] != '\0'; i++) {
		switch (str[i]) {
		case 'C': case 'A': case 'M': case 'B': case 'R': case 'I': case 'D': case 'G': case 'E':
			continue;
		}
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
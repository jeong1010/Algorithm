#include <stdio.h>
int main() {
	int t, index;
	char str[81];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %s", &index, &str);
		for (int j = 0; str[j] != '\0'; j++) {
			if (j + 1 == index) continue;
			printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;
}
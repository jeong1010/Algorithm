#include <stdio.h>
int main() {
	char name[1000];
	while (scanf(" %[^\n]s", name) != EOF) {
		for (int i = 0; name[i] != '\0'; i++) {
			if (name[i] == 'i') printf("%c", 'e');
			else if (name[i] == 'e') printf("%c", 'i');
			else if (name[i] == 'I') printf("%c", 'E');
			else if (name[i] == 'E') printf("%c", 'I');
			else printf("%c", name[i]);
		}
		printf("\n");
	}

	return 0;
}
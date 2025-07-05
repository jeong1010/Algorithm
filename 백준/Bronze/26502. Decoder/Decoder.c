#include <stdio.h>
int main() {
	char str[1000];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %[^\n]s", str);
		for (int j = 0; str[j] != '\0'; j++) {
			switch (str[j]) {
			case 'y':
				printf("a");
				break;
			case 'a':
				printf("e");
				break;
			case 'e':
				printf("i");
				break;
			case 'i':
				printf("o");
				break;
			case 'o':
				printf("u");
				break;
			case 'u':
				printf("y");
				break;
			case 'Y':
				printf("A");
				break;
			case 'A':
				printf("E");
				break;
			case 'E':
				printf("I");
				break;
			case 'I':
				printf("O");
				break;
			case 'O':
				printf("U");
				break;
			case 'U':
				printf("Y");
				break;
			default:
				printf("%c", str[j]);
				break;
			}
		}
		printf("\n");
	}
	return 0;
}
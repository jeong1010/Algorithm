#include <stdio.h>
int main() {
	char c;
	scanf("%c", &c);
	switch (c) {
	case 'M':
		printf("MatKor\n");
		break;
	case 'W':
		printf("WiCys\n");
		break;
	case 'C':
		printf("CyKor\n");
		break;
	case 'A':
		printf("AlKor\n");
		break;
	case '$':
		printf("$clear\n");
		break;
	}
	return 0;
}
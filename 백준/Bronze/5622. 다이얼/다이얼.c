#include <stdio.h>
int main() {
	char dial[16];
	int sum = 0;
	scanf("%s", dial);
	for (int i = 0; dial[i] != '\0'; i++) {
		switch (dial[i]) {
		case 'A': case 'B': case 'C':
			sum += 3;
			break;
		case 'D': case 'E': case 'F':
			sum += 4;
			break;
		case 'G': case 'H': case'I':
			sum += 5;
			break;
		case 'J': case 'K': case 'L':
			sum += 6;
			break;
		case 'M': case 'N': case 'O':
			sum += 7;
			break;
		case 'P': case'Q': case'R': case'S':
			sum += 8;
			break;
		case 'T': case 'U': case'V':
			sum += 9;
			break;
		case 'W':case'X':case'Y':case'Z':
			sum += 10;
			break;
		}
	}
	printf("%d\n", sum);
	return 0;
}
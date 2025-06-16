#include <stdio.h>
int main() {
	int sum = 0, grp;
	char input;
	for (int i = 0; i < 6; i++) {
		scanf(" %c", &input);
		if (input == 'W') sum++;
	}
	switch (sum) {
	case 5: case 6:
		grp = 1;
		break;
	case 3: case 4:
		grp = 2;
		break;
	case 2: case 1:
		grp = 3;
		break;
	default:
		grp = -1;
		break;
	}
	printf("%d\n", grp);
	return 0;
}
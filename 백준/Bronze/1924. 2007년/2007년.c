#include <stdio.h>
int main() {
	int x, y, c = 0;
	int week = 0;
	scanf("%d %d", &x, &y);
	for (int i = 1; i < x; i++) {
		switch (i) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		//case 12:
			c += 31;
			break;
		case 2:
			c += 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			c += 30;
			break;
		}
	}
	c += y;
	switch (c % 7) {
	case 0:
		printf("SUN\n");
		break;
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;
	case 5:
		printf("FRI\n");
		break;
	case 6:
		printf("SAT\n");
		break;
	}

	return 0;
}
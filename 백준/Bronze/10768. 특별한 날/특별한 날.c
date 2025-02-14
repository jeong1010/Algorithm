#include <stdio.h>
int main() {
	int month, day;
	scanf("%d", &month);
	scanf("%d", &day);
	if (month < 2 || (month == 2 && day < 18))
		printf("Before\n");
	else if (month == 2 && day == 18)
		printf("Special\n");
	else
		printf("After\n");
	return 0;
}
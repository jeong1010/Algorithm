#include <stdio.h>
#include <string.h>

int main() {
	char grade[3];
	float score;
	scanf("%s", grade);
	if (strcmp(grade, "A+") == 0)
		score = 4.3;
	else if (strcmp(grade, "A0") == 0)
		score = 4.0;
	else if (strcmp(grade, "A-") == 0)
		score = 3.7;
	else if (strcmp(grade, "B+") == 0)
		score = 3.3;
	else if (strcmp(grade, "B0") == 0)
		score = 3.0;
	else if (strcmp(grade, "B-") == 0)
		score = 2.7;
	else if (strcmp(grade, "C+") == 0)
		score = 2.3;
	else if (strcmp(grade, "C0") == 0)
		score = 2.0;
	else if (strcmp(grade, "C-") == 0)
		score = 1.7;
	else if (strcmp(grade, "D+") == 0)
		score = 1.3;
	else if (strcmp(grade, "D0") == 0)
		score = 1.0;
	else if (strcmp(grade, "D-") == 0)
		score = 0.7;
	else if (strcmp(grade, "F") == 0)
		score = 0;
	printf("%.1f\n", score);
	return 0;
}
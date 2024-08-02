#include <stdio.h>
#include <string.h>
int main() {
	double hakjum[20];
	double tmp=0, mulSum=0, hjSum=0;
	char pj[3];
	char name[51];
	for (int i = 0; i < 20; i++) {
		scanf("%s %lf %s", name, &hakjum[i], pj);
		if (strcmp(pj, "A+") == 0)
			tmp = 4.5;
		else if (strcmp(pj, "A0") == 0)
			tmp = 4.0;
		else if (strcmp(pj, "B+") == 0)
			tmp = 3.5;
		else if (strcmp(pj, "B0") == 0)
			tmp = 3.0;
		else if (strcmp(pj, "C+") == 0)
			tmp = 2.5;
		else if (strcmp(pj, "C0") == 0)
			tmp = 2.0;
		else if (strcmp(pj, "D+") == 0)
			tmp = 1.5;
		else if (strcmp(pj, "D0") == 0)
			tmp = 1.0;
		else if (strcmp(pj, "F") == 0)
			tmp = 0.0;
		if (strcmp(pj, "P") != 0) {
			mulSum += hakjum[i] * tmp;
			hjSum += hakjum[i];
		}
	}
	printf("%lf\n", mulSum / hjSum);
	return 0;
}
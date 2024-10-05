#include <stdio.h>
int main() {
	int r[3];
	for (int i = 0; i < 3; i++)
		scanf("%d", &r[i]);
	if (r[0] == 60 && r[1] == 60 && r[2] == 60)
		printf("Equilateral\n");
	else {
		if (r[0] + r[1] + r[2] == 180) {
			if (r[0] == r[1] || r[0] == r[2] || r[1] == r[2])
				printf("Isosceles\n");
			else
				printf("Scalene\n");
		}
		else
			printf("Error\n");
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
int main() {
	int t;
	float n;
	char u[4];
	
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%f", &n);
		scanf("%s", &u);
		if (strcmp(u, "kg") == 0)
			printf("%.4f lb\n", n * 2.2046);
		else if (strcmp(u, "l") == 0)
			printf("%.4f g\n", n * 0.2642);
		else if (strcmp(u, "lb") == 0)
			printf("%.4f kg\n", n * 0.4536);
		else if (strcmp(u, "g") == 0)
			printf("%.4f l\n", n * 3.7854);
	}
	return 0;
}
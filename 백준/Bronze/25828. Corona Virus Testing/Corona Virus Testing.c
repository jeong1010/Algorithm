#include <stdio.h>
int main() {
	int g, p, t, sum = 0, total_humans = 0;
	scanf("%d %d %d", &g, &p, &t);
	total_humans = g * p;
	sum += g + p * t;
	if (sum < total_humans) printf("2\n");
	else if (sum == total_humans) printf("0\n");
	else printf("1\n");
	return 0;
}
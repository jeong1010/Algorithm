#include <stdio.h>
#include <math.h>
int main() {
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 == n2 && n2 == n3) printf("2\n");
	else if (pow(n1,2) + pow(n2,2) == pow(n3,2) || pow(n2,2) + pow(n3,2) == pow(n1,2) || pow(n1,2) + pow(n3,2) == pow(n2,2)) printf("1\n");
	else printf("0\n");
	return 0;
}
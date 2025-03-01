#include <stdio.h>
int main() {
	long double n[3];
	int res;
	for (int i = 0; i < 3; i++)
		scanf("%Lf", &n[i]);
	res = n[0] * (n[1] > n[2] ? n[1] / n[2] : n[2] / n[1]);
	printf("%d\n", res);
	return 0;
}
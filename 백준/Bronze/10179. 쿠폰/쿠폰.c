#include <stdio.h>
int main() {
	int n;
	double dollar;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &dollar);
		dollar -=  dollar * 0.2;
		printf("$%.2f\n", dollar);
	}
	return 0;
}
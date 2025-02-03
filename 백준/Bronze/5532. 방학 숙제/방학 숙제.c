#include <stdio.h>
int main() {
	int a, b, l, c, d, sumA=0, sumB=0;
	int* max;
	scanf("%d", &l);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	// k
	sumA += a / c;
	if (a % c != 0)
		sumA++;
	// m
	sumB += b / d;
	if (b % d != 0)
		sumB++;
	if (sumA > sumB)
		max = &sumA;
	else
		max = &sumB;
	printf("%d\n", l - *max);
	return 0;
}
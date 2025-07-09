#include <stdio.h>
int main() {
	int ur, tr, uo, to;
	scanf("%d %d %d %d", &ur, &tr, &uo, &to);
	printf("%d\n", ur * 56 + tr * 24 + uo * 14 + to * 6);
	return 0;
}
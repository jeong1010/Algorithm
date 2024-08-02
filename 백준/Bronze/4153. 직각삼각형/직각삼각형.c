#include <stdio.h>
#include <stdbool.h>
bool isRight(int a, int b, int c) {
	int *max, *n1, *n2;
	if (a >= b) {
		if (a >= c) {
			max = &a;
			n1 = &b;
			n2 = &c;
		}
		else {
			max = &c;
			n1 = &a;
			n2 = &b;
		}
	}
	else {
		if (b >= c) {
			max = &b;
			n1 = &a;
			n2 = &c;
		}
		else {
			max = &c;
			n1 = &a;
			n2 = &b;
		}
	}
	return (*max) * (*max) == (*n1) * (*n1) + (*n2) * (*n2);
}
int main() {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0) break;
		if (isRight(a, b, c))
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}
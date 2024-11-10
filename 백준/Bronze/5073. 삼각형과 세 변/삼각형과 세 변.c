#include <stdio.h>
int isInvalid(int a, int b, int c) {
	int* max;
	int sum = 0;
	if (a > b) {
		max = &a;
		sum += b;
	}
	else {
		max = &b;
		sum += a;
	}

	if (*max > c)
		sum += c;
	else {
		sum += *max;
		max = &c;
	}
	return *max >= sum;
}
int main() {
	int a, b, c;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == b && b == c && c == a) {
			if (a == 0)
				break;
			else
				printf("Equilateral\n");
		}
		else if (isInvalid(a, b, c)) {
			printf("Invalid\n");
		}
		else if (a == b || b == c || c == a) {
			printf("Isosceles\n");
		}
		else printf("Scalene\n");
	}
	
	return 0;
}
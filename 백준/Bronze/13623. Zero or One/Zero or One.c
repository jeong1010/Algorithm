#include <stdio.h>
int main() {
	short a, b, c;
	scanf("%hd %hd %hd", &a, &b, &c);
	if (a == b) {
		if (a == c) printf("*\n");
		else printf("C\n");
	}
	else {
		if (a == c) printf("B\n");
		else if (b == c) printf("A\n");
	}
	return 0;
}
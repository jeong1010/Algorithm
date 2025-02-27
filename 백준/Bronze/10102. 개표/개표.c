#include <stdio.h>
int main() {
	char c;
	int n, a=0, b=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %c", &c);
		if (c == 'A') a++;
		else if (c == 'B') b++;
	}
	if (a > b)printf("A\n");
	else if (b > a)printf("B\n");
	else printf("Tie\n");
	return 0;
}
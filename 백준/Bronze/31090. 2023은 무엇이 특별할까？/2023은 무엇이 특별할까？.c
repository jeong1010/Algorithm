#include <stdio.h>
int main() {
	int t, n, tmp;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		tmp = n % 100;
		if ((n + 1) % tmp == 0) printf("Good\n");
		else printf("Bye\n");
	}
	return 0;
}
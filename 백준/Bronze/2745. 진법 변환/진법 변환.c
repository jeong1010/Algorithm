#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
	char n[32];
	int b, i, sum = 0;
	scanf("%s %d", n, &b);
	i = strlen(n) - 1;
	while (i >= 0) {
		if (n[i] - '0' > 9) {
			sum += (n[i] - 'A' + 10) * pow(b, strlen(n) - i - 1);
		}
		else
			sum += (n[i] - '0') * pow(b, strlen(n) - i - 1);
		i--;
	}
	printf("%d\n", sum);
	return 0;
}
#include <stdio.h>
int main() {
	int n, sum = 0;
	char s[51];
	char c;
	scanf("%d", &n);
	scanf("%s", &s);
	for (int i = 0; i < n; i++) {
		c = s[i];
		if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
			sum++;
	}
	printf("%d\n", sum);
}
#include <stdio.h>
int main() {
	char s[11];
	int sum = 0, i, c;
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++) {
		sum = 0;
		c = s[i];
		while (c > 0) 
		{
			sum += c % 10;
			c /= 10;
		}
		for (int j = 0; j < sum; j++)printf("%c", s[i]);
		printf("\n");
	}
	return 0;
}
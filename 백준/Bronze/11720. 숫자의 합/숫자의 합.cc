#include <stdio.h>
#include <malloc.h>

int main() {
	int sum = 0;
	int n, i=0, tmp;
	char s[100];
	scanf("%d", &n);
	scanf("%s", &s);
	while (s[i] != '\0') {
		tmp = s[i] - '0';
		sum += tmp;
		i++;
	}
	printf("%d", sum);
	return 0;
}
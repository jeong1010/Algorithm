#include <stdio.h>
int main() {
	char t[3];
	for (int i = 0; i < 3; i++)
		scanf("%c", &t[i]);
	for (int i = 2; i >= 0; i--)
		printf("%c", t[i]);
	return 0;
}
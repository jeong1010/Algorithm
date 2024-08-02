#include <stdio.h>
#include <string.h>

int main() {
	// 65: A, 97: a
	char str[100];
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] < 97)
			str[i] += 32;
		else
			str[i] -= 32;
	}
	printf("%s\n", str);
	return 0;
}
#include <stdio.h>
int main() {
	char* pw = "ILOVEYONSEI";
	char c;
	int sum = 0;
	scanf("%c", &c);
	for (int i = 0; pw[i] != '\0'; i++) {
		if (pw[i] > c)
			sum += pw[i] - c;
		else
			sum += -(pw[i] - c);
		c = pw[i];
	}
	printf("%d\n", sum);
	return 0;
}
#include <stdio.h>
int main() {
	char str[30];
	int sum = 5000;
	scanf("%[^\n]s", str);
	for (int i = 0; str[i] != '\0'; i++) {
		switch (str[i]) {
		case '1':
			sum -= 500;
			break;
		case '2':
			sum -= 800;
			break;
		case '3':
			sum -= 1000;
			break;
		}
	}
	printf("%d\n", sum);
	return 0;
}
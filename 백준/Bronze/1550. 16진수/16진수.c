#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	char str[7];
	int i = 0, sum=0;
	scanf("%s", str);
	while (str[i] != '\0') {
		switch (str[i]) {
		case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
			sum += (str[i] - 'A' + 10) * (int)pow(16, strlen(str) - i - 1);
			break;
		default:
			sum += (str[i] - '0') * (int)pow(16, strlen(str) - i - 1);
			break;
		}
		i++;
	}
	printf("%d\n", sum);
	return 0;
}
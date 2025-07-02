#include <stdio.h>
#include <string.h>
int main() {
	int x, sum = 0;
	char str[6];
	for (int i = 0; i < 4; i++) {
		scanf("%s %d", str, &x);
		if (strcmp(str, "Es") == 0)
			sum += x * 21;
		else if (strcmp(str, "Stair") == 0)
			sum += x * 17;
	}
	printf("%d\n", sum);
	return 0;
}
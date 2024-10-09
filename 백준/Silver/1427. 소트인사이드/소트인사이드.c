#include <stdio.h>
#include <string.h>
#define MAX_SIZE 11
void sortInside(char n[]) {
	int tmp, j;
	for (int i = strlen(n) - 1 - 1; i >= 0; i--) {
		tmp = n[i];
		for (j = i; j < strlen(n)-1; j++) {
			if (tmp >= n[j + 1])
				break;
			else {
				n[j] = n[j + 1];
			}
		}
		n[j] = tmp;
	}
}
int main() {
	char n[MAX_SIZE];
	scanf("%s", &n);
	sortInside(n);
	printf("%s", n);

	return 0;
}
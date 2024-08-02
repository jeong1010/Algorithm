#include <stdio.h>
#include <string.h>
#define MAX_SIZE 170
int main() {
	int t, r, idx=0;
	char s[21];
	char p[MAX_SIZE];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %s", &r, s, 21);
		for (int j = 0; j < strlen(s); j++) {
			for (int k = 0; k < r; k++) {
				p[idx++] = s[j];
			}
		}
		p[idx] = '\0';
		printf("%s\n", p);
		idx = 0;
		strcpy(p, "");
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	char** strs;
	scanf("%d", &n);
	strs = (char**)malloc(sizeof(char*)*n);
	for (int i = 0; i < n; i++) {
		strs[i] = (char*)malloc(sizeof(char) * 31);
	}
	for (int i = 0; i < n; i++) {
		scanf(" %[^\n]s", strs[i]);
		if (strs[i][0] >= 'a' && strs[i][0] <= 'z')
			strs[i][0] = strs[i][0] - 'a' + 'A';
	}
	for (int i = 0; i < n; i++) {
		printf("%s\n", strs[i]);
	}
	return 0;
}
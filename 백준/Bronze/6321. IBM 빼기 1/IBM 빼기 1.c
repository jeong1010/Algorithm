#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	char** arr;
	scanf("%d", &n);
	arr = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++)
		arr[i] = (char*)malloc(sizeof(char) * 51);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("String #%d\n", i + 1);
		for (int j = 0; arr[i][j] != '\0'; j++) {
			printf("%c", (arr[i][j] + 1 <= 'Z' ? arr[i][j] + 1 : arr[i][j] - 'Z' + 'A'));
		}
		printf("\n\n");
	}
	for (int i = n - 1; i >= 0; i--)
		free(arr[i]);
	free(arr);
	return 0;
}
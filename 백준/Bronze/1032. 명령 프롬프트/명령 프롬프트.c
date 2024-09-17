#include <stdio.h>
#include <string.h>
int main() {
	int n;
	char tmp[51];
	char result[51];
	scanf("%d", &n);
	scanf("%s", &tmp);
	strcpy(result, tmp); 
	for (int i = 1; i < n; i++) {
		scanf("%s", &tmp);
		if(strcmp(result, tmp) != 0)
			for (int j = 0; tmp[j] != '\0'; j++)
				if (result[j] != tmp[j]) result[j] = '?';
	}
	printf("%s\n", result);
	return 0;
}
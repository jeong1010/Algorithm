#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char txt[101], kwd[101];
	char* tmp;
	int i = 0, j=0, isFound=0, size, index=0;
	scanf("%s", txt);
	scanf("%s", kwd);
	size = strlen(kwd);
	tmp = (char*)malloc(sizeof(char) * (size+1));
	while (txt[i] != '\0') {
		if (txt[i] >= '0' && txt[i] <= '9') 
		{
			i++;
			continue;
		}
		tmp[j++] = txt[i];
		if (j == size) {
			tmp[j] = '\0';
			if (strcmp(kwd, tmp) == 0) {
				isFound = 1;
				break;
			}
			else
			{
				j = 0;
				index++;
				i = index - 1; // 밑에서 ++할거라
			}
		}
		i++;
	}
	printf("%d", isFound);
	free(tmp);
	return 0;
}
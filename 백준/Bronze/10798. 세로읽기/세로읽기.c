#include <stdio.h>
#include <string.h>
int main() {
	char txt[5][15] = {0, };
	int max = -1, tmp;
	for (int i = 0; i < 5; i++) {
		scanf("%s", txt[i]);
		tmp = strlen(txt[i]);
		if (max < tmp) max = tmp;
	}
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 5; j++) {
			if(txt[j][i] != '\0' && txt[j][i] != 0)
				printf("%c", txt[j][i]);
		}
	}
		
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, who = -1;
	char** susp;
	scanf("%d", &n);
	susp = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		susp[i] = (char*)malloc(sizeof(char) * 101);
	}
	for (int i = 0; i < n; i++) {
		scanf("%s", susp[i]);
		if(who == -1){
			for (int j = 0; susp[i][j] != '\0'; j++) {
				if (susp[i][j] == 'S')
				{
					who = i;
					break;
				}
			}
		}
	}
	if(who != -1)
		printf("%s\n", susp[who]);
	return 0;
}
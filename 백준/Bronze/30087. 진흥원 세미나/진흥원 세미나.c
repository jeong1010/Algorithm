#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	char** smn;
	int n;
	scanf("%d", &n);
	smn = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++) {
		smn[i] = (char*)malloc(sizeof(char) * 30);
		scanf("%s", smn[i]);
	}
	for (int i = 0; i < n; i++) {
		if (strcmp(smn[i], "Algorithm") == 0)
			printf("204\n");
		else if (strcmp(smn[i], "DataAnalysis") == 0)
			printf("207\n");
		else if (strcmp(smn[i], "ArtificialIntelligence") == 0)
			printf("302\n");
		else if (strcmp(smn[i], "CyberSecurity") == 0)
			printf("B101\n");
		else if (strcmp(smn[i], "Network") == 0)
			printf("303\n");
		else if (strcmp(smn[i], "Startup") == 0)
			printf("501\n");
		else if (strcmp(smn[i], "TestStrategy") == 0)
			printf("105\n");
		
	}

	return 0;
}
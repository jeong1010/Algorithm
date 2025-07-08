#include <stdio.h>
#include <string.h>
int main() {
	int n;
	char input[21], maxStr[21], tmp[21], maxTmp[21];
	while (1) {
		scanf("%d", &n);
		if (n == 0) break;

		strcpy(maxStr, "");
		strcpy(maxTmp, "");

		for (int i = 0; i < n; i++) {
			scanf(" %s", input);
			strcpy(tmp, input);

			for (int j = 0; input[j] != '\0'; j++) {
				if (input[j] >= 'a')
					input[j] = input[j] - 'a' + 'A';
			}

			if (strcmp(input, maxTmp) < 0 || strcmp(maxStr, "") == 0)
			{
				strcpy(maxStr, tmp);
				strcpy(maxTmp, input);
			}
		}
		printf("%s\n", maxStr);
	}
	return 0;
}
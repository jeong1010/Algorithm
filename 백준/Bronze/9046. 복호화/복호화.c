#include <stdio.h>
#include <string.h>
int main() {
	int t, max = -1, mul = 0, maxIndex = -1;
	int cntArr[26] = {0, };
	char s[256];
	scanf("%d", &t);
	for(int k=0;k<t;k++)
	{
		scanf(" %[^\n]s", s);

		for (int i = 0; i < strlen(s); i++) {
			if (s[i] != ' ')
				cntArr[s[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if (cntArr[i] > max) {
				max = cntArr[i];
				maxIndex = i;
				mul = 0;
			}
			else if (cntArr[i] == max)
				mul = 1;
		}

		if (mul == 1) printf("?\n");
		else printf("%c\n", maxIndex + 'a');

		max = -1, maxIndex = -1, mul = 0;
		memset(cntArr, 0, sizeof(cntArr));
	}

	return 0;
}
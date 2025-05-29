#include <stdio.h>
#include <string.h>
int main() {
	char strs[][51] = { "Never gonna give you up", "Never gonna let you down", "Never gonna run around and desert you", "Never gonna make you cry", "Never gonna say goodbye", "Never gonna tell a lie and hurt you", "Never gonna stop" };
	char input[51];
	int n, valid = 1, no = 1;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf(" %[^\n]s", input);
		for (int j = 0; j < 7; j++)
		{
			if (strcmp(input, strs[j]) == 0) {
				valid = 1;
				break;
			}
			else valid = 0;
		}
		if (!valid) no = 0;
	}
	if (no) printf("No\n");
	else printf("Yes\n");
	return 0;
}
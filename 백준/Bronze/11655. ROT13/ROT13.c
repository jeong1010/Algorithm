#include <stdio.h>
int main() {
	char str[101];
	int i = 0;
	scanf("%[^\n]s", str);
	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] + 13 > 'z')
				str[i] = str[i] + 13 - 'z' + ('a' - 1);
			else
				str[i] = str[i] + 13;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] + 13 > 'Z')
				str[i] = str[i] + 13 - 'Z' + ('A' - 1);
			else
				str[i] = str[i] + 13;
		}
		i++;
	}
	printf("%s\n", str);
	return 0;
}
#include <stdio.h>
#include <string.h>
int main() {
	char str[101];
	scanf("%s", &str);
	int i = 0, cnt = 0;
	while(i <= strlen(str))
	{
		if (str[cnt] == '\0')
			break;
		printf("%c", str[cnt++]);
		i++;
		if (i % 10 == 0)
			printf("\n");
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
int main() {
	char str[104];
	int addZero = 0, curNum;
	scanf("%s", str);
	addZero = strlen(str) % 3;
	if (addZero != 0)
	{
		addZero = addZero == 1 ? 2 : 1;
		for (int i = strlen(str); i >= addZero-1; i--)
			str[i + addZero] = str[i];
		for (int i = 0; i < addZero; i++)
			str[i] = '0';
	}
	for (int i = 0; i < strlen(str); i += 3) {
		curNum = 0;
		curNum += str[i + 2] == '1' ? 1 : 0;
		curNum += str[i + 1] == '1' ? 2 : 0;
		curNum += str[i] == '1' ? 4 : 0;
		printf("%d", curNum);
	}
	return 0;
}
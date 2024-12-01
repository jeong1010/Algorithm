#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int a, b, c, d, n, len, tasty=1;
	int ma = 0, mb = 0, mc = 0, md = 0;
	char* str;
	scanf("%d", &n);
	str = (char*)malloc(sizeof(char) * (n + 1));
	scanf(" %d %d %d %d", &a, &b, &c, &d);

	scanf("%s", str);

	len = strlen(str);
	if (str[0] != 'a' || str[len - 1] != 'a') {
		tasty = 0;
	}
	else
	{
		for (int i = 1; i < len; i++) {
			switch (str[i]) {
			case 'a':
				ma++;
				break;
			case 'b':
				mb++;
				break;
			case 'c':
				mc++;
				break;
			case 'd':
				md++;
				break;
			}
			if (str[i - 1] == str[i]) {
				tasty = 0;
				break;
			}
		}
		if (ma > a || mb > b || mc > c || md > d) tasty = 0;
	}

	if (tasty) printf("Yes\n");
	else printf("No\n");
	return 0;
}
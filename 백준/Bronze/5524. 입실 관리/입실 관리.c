#include <stdio.h>
#include <stdio.h>
int main() {
	char str[21];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", str);
		for (int j = 0; j < strlen(str); j++) {
			if (str[j] < 'a') // 대문자면
				str[j] = str[j] - 'A' + 'a';
		}
		printf("%s\n", str);
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
int isGroup(char str[], int abc[]) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (abc[str[i] - 'a'] == 1) {
			if (str[i] != str[i - 1])
				return 0;
		}
		else abc[str[i] - 'a'] = 1;
	}
	return 1;
}
int main() {
	int abc[26] = { 0, };
	char str[101];
	int n, sum=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", str);
		sum += isGroup(str, abc);
		memset(abc, 0, 26*sizeof(int));
	}
	printf("%d\n", sum);
	return 0;
}
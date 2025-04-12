#include <stdio.h>
int main() {
	int n, cnt=0;
	char s[21];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (s[0] == 'C')cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
#include <stdio.h>
int main() {
	int n, input, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		if (input % 2 == 1) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
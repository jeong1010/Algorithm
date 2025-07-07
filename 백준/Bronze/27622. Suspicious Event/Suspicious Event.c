#include <stdio.h>
int main() {
	int login[1001] = { 0, };
	int n, input, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		if (input >= 0)
			login[input] = 1;
		else {
			if (login[-input] == 1) login[-input] = 0;
			else sum++;
		}
	}
	printf("%d\n", sum);
	return 0;
}
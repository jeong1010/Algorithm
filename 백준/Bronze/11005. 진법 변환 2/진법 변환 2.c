#include <stdio.h>
int main() {
	int n, b;
	int index = 31;
	char res_rev[32];

	scanf("%d %d", &n, &b);
	while (n >= b) {
		if (b <= 10)
			res_rev[index--] = '0' + (n % b);
		else {
			if (n % b >= 10)
				res_rev[index--] = 'A' - 10 + (n % b);
			else
				res_rev[index--] = '0' + (n % b);
		}
		n /= b;

	}
	if (n >= 10)
		res_rev[index--] = 'A' - 10 + n;
	else
		res_rev[index--] = '0' + n;

	for (int i = index+1; i < 32; i++)
		printf("%c", res_rev[i]);
	return 0;
}
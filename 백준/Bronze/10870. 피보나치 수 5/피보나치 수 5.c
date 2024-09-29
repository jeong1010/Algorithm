#include <stdio.h>
int main() {
	int n1 = 0, n2 = 1;
	int tmp, n;
	scanf("%d", &n);
	if (n == 0 || n == 1)
		tmp = n;
	else
	{ // 2부터
		for (int i = 0; i < n - 1; i++) {
			tmp = n1 + n2;
			n1 = n2;
			n2 = tmp;
		}
	}
	printf("%d\n", tmp);
}
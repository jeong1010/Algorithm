#include <math.h>
#include <stdio.h>
int main() {
	int n, v1;
	int n1=1, n2=1, n3;
	scanf("%d", &n);
	if (n == 1 || n == 2) {
		n3 = 1;
		v1 = 1;
	}
	else
	{
		v1 = n - 2;
		for (int i = 2; i < n; i++) {
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
	}
	printf("%d %d\n", n3, v1);
	return 0;
}
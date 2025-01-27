#include <stdio.h>
int main() {
	int n, res=1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		res *= 2;
	}
	printf("%d", res);
	return 0;
}
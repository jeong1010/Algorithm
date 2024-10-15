#include <stdio.h>
int main() {
	int n;
	long long int k = 1;
	scanf("%d", &n);
	for (int i = 0; i < 3; i++) {
		k *= n;
	}
	printf("%lld\n%d", k, 3);
	return 0;
}
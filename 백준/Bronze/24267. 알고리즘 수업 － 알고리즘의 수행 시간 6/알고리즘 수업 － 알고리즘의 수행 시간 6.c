#include <stdio.h>
int main() {
	int n;
	long long int t=0;
	long long int tmp = 0;
	// 0 0 1 4 10 20 35 56 84
	//   0 1 3 6  10 15 21 28
	scanf("%d", &n);
	for (int i = 0; i < n-1; i++) {
		tmp += i;
		t += tmp;
	}
	printf("%lld\n%d\n", t, 3);
	return 0;
}
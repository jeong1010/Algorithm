#include <stdio.h>
long long int move(long long int n, long long int cur, long long int cnt) {
	if (cur >= n) return cnt + 1;
	else if (cur < n) return move(n, cur + ++cnt * 6, cnt);
}

int main() {
	long long int n;
	scanf("%lld", &n);
	printf("%lld\n", move(n, 1, 0));
	return 0;
}
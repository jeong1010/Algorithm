#include <stdio.h>
#include <math.h>
int hanoi(int how, int from, int to, int tmp) {
	if (how == 0)return 0;
	hanoi(how - 1, from, tmp, to);
	printf("%d %d\n", from, to);
	hanoi(how - 1, tmp, to, from);
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", (int)pow(2, n) - 1);
	hanoi(n, 1, 3, 2);
	return 0;
}
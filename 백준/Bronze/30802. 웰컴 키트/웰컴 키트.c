#include <stdio.h>
int rUp(int x, int y) {
	if (x % y != 0)
		return x / y + 1;
	else return x / y;
}
int main() {
	int n, t, p, cntT=0;
	int ts[6];
	scanf("%d", &n);
	for (int i = 0; i < 6; i++) {
		scanf("%d", &ts[i]); 
	}
	scanf("%d %d", &t, &p);
	
	for (int i = 0; i < 6; i++) {
		cntT += rUp(ts[i], t);
	}
	printf("%d\n", cntT);
	printf("%d %d\n", n / p, n % p);
	return 0;
}
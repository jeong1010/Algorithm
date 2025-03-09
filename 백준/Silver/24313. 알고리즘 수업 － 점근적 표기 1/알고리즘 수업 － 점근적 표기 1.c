#include <stdio.h>
int main() {
	int a1, a0, c, n0, res, i1, i2;
	scanf("%d %d", &a1, &a0);
	scanf("%d", &c);
	scanf("%d", &n0);

	i1 = (a1 - c);
	i2 = a0;
	
	if (i1 > 0) res = 0;
	else if (i1 == 0) {
		if (i2 <= 0) res = 1;
		else res = 0;
	}
	else { // i1 < 0
		if (i2 >= 0)
		{
			if ((a1 - c) * n0 + a0 <= 0) res = 1;
			else res = 0;
		}
		else res = 1;
	}
	printf("%d\n", res);
	return 0;

}
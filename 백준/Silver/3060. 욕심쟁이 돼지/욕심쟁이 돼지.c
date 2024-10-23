#include <stdio.h>
int main() {
	int pig[6];
	int n, l, cnt=1, sum=0;
	scanf("%d", &l);
	for (int m = 0; m < l; m++) {
		scanf("%d", &n);
		for (int i = 0; i < 6; i++)
		{
			scanf("%d", &pig[i]);
			sum += pig[i];
		}
		while (n >= sum) {
			//n -= sum;
			sum *= 4;
			cnt++;
		}
		printf("%d\n", cnt);
		cnt = 1;
		sum = 0;
	}
	return 0;
}
#include <stdio.h>
int main() {
	int n, k, cnt=0, crtNum;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
		{
			crtNum = i;
			cnt++;
			if (cnt == k)
				break;
		}
	}
	if (cnt == k) printf("%d\n", crtNum);
	else printf("%d\n", 0);
	return 0;
}
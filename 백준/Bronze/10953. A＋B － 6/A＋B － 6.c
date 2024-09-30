#include <stdio.h>
int main() {
	int n, m, k;
	scanf("%d", &k);
	for(int i=0;i<k;i++)
	{
		scanf("%d,%d", &n, &m);
		printf("%d\n", n + m);
	}
	return 0;
}
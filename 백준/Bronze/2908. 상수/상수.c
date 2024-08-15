#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m, newN=0, newM=0, sq=1;
	scanf("%d %d", &n, &m);
	for (int i = 2; i >= 0; i--) {
		newN += n / (100 / sq) * sq;
		newM += m / (100 / sq) * sq;
		n = n % (100 / sq);
		m = m % (100 / sq);
		sq *= 10;
	}
	if (newN > newM)printf("%d\n", newN);
	else printf("%d\n", newM);

	return 0;
}
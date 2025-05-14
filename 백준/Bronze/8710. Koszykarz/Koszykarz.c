#include <stdio.h>
int main() {
	int k, w, m, tmp;
	scanf("%d %d %d", &k, &w, &m);
	tmp = (w - k) / m;
	if ((w - k) % m != 0) tmp++;
	printf("%d\n", tmp);
	return 0;
}
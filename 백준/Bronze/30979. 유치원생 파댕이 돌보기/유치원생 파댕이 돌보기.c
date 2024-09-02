#include <stdio.h>
int main() {
	int t, n, f;
	scanf("%d", &t);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &f);
		t -= f;
	}
	if (t <= 0) printf("Padaeng_i Happy\n");
	else printf("Padaeng_i Cry\n");

	return 0;
}
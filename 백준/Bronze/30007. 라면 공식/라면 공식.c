#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, x, b, n;
	int* w;

	scanf("%d", &n);
	w = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &a, &b, &x);
		w[i] = a * (x - 1) + b;
	}
	for (int i = 0; i < n; i++) printf("%d\n", w[i]);

	return 0;
}
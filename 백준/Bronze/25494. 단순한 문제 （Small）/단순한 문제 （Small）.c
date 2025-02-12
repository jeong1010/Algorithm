#include <stdio.h>
int main() {
	int a, b, c;
	int sum = 0, t;
	int arr[100];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		sum = 0;
		scanf("%d %d %d", &a, &b, &c);
		for (int j = a; j >= 1; j--) {
			for (int k = b; k >= 1; k--) {
				for (int q = c; q >= 1; q--) {
					if (j % k == k % q && k % q == q % j)
						sum++;
				}
			}
		}
		arr[i] = sum;
	}
	for (int i = 0; i < t; i++)
		printf("%d\n", arr[i]);
	return 0;
}
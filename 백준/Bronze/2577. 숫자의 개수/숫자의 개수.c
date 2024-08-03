#include <stdio.h>
int main() {
	int a, b, c, cnt=1;
	int mu, tmp;
	int arr[10] = { 0, };
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	mu = a * b * c;
	tmp = mu;
	while (tmp / 10 != 0) {
		tmp /= 10;
		cnt++;
	}
	tmp = 1;
	for (int i = 1; i < cnt; i++)
		tmp *= 10;
	for (int i = 0; i < cnt; i++) {
		arr[mu / tmp]++;
		mu = mu % tmp;
		tmp /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
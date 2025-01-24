#include <stdio.h>
int main() {
	int n, len, tmp, max = 0;
	int arr[10] = { 0, };
	scanf("%d", &n);
	tmp = n;
	for (len = 1; tmp / 10 > 0; len++)
		tmp /= 10;
	tmp = n;
	for (int i = 0; i < len; i++) {
		arr[tmp % 10]++;
		tmp /= 10;
	}

	tmp = arr[6] + arr[9];
	if (tmp % 2 == 0) {
		arr[6] = tmp / 2, arr[9] = tmp / 2;
	}
	else {
		arr[6] = tmp / 2;
		arr[9] = tmp - arr[6];
	}
	for (int i = 0; i <= 9; i++) {
		if (arr[i] > max) max = arr[i];
	}

	printf("%d\n", max);

	return 0;
}
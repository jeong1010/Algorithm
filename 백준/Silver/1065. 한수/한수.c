#include <stdio.h>
#include <string.h>
int main() {
	int n, cnt=0, index, deg;
	int arr[5];
	scanf("%d", &n);
	if (n < 100) cnt = n;
	else if (n < 111) cnt = 99;
	else {
		cnt += 99;
		for (int i = 111; i <= n; i++) {
			index = 0;
			deg = 1000;
			while (deg >= 1) {
				if (i / deg >= 1) {
					arr[index++] = (i / deg) % 10;
				}
				deg /= 10;
			}
			arr[index] = '\0';

			if (i != 1000) {
				if (arr[0] - arr[1] == arr[1] - arr[2])
					cnt++;
			}

			memset(arr, 0, sizeof(int) * 5);
		}
	}
	printf("%d\n", cnt);
	return 0;
}
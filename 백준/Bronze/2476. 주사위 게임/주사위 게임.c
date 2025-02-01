#include <stdio.h>
#include <string.h>
int main() {
	int arr[6];
	int max = -1, n, input, diceCnt=0, diceIndex=-1, sum=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		memset(arr, 0, sizeof(int) * 6);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &input);
			arr[input - 1]++;
		}
		for (int j = 0; j < 6; j++) {
			if (arr[j] >= diceCnt) {
				diceCnt = arr[j];
				diceIndex = j;
			}
		}
		switch (diceCnt) {
		case 1:
			sum = (diceIndex + 1) * 100;
			break;
		case 2:
			sum = 1000 + (diceIndex + 1) * 100;
			break;
		case 3:
			sum = 10000 + (diceIndex + 1) * 1000;
			break;
		}
		if (sum > max)
			max = sum;
		sum = 0;
		diceCnt = 0, diceIndex = -1;
	}
	printf("%d\n", max);
	return 0;
}
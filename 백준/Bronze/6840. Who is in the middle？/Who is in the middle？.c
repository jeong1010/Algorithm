#include <stdio.h>
int main() {
	int arr[3];
	int input, j;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
		if (i == 0) continue;
		input = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (input < arr[j]) {
				arr[j + 1] = arr[j];
			}
			else break;
		}
		arr[j + 1] = input;
	}
	printf("%d\n", arr[1]);
	return 0;
}
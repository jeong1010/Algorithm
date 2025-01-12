#include <stdio.h>
int main() {
	int arr[3];
	int tmp;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
		for (int j = i; j > 0; j--) {
			if (arr[j - 1] > arr[j]) {
				tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	printf("%d\n", arr[1]);
	return 0;
}
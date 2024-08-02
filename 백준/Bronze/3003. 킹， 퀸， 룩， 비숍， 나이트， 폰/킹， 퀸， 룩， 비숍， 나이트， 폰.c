#include <stdio.h>
int main() {
	int arr[6] = { 1,1,2,2,2,8 };
	int num, i;
	for (i = 0; i < 6; i++) {
		scanf("%d", &num);
		arr[i] -= num;
	}
	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
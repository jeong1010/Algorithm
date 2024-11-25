#include <stdio.h>
int main() {
	int l, p;
	int arr[5];
	scanf("%d %d", &l, &p);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		arr[i] -= l * p;
	}
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	return 0;
}
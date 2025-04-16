#include <stdio.h>
int main() {
	int arr[3];
	int check = 0;
	for(int i = 0; i < 3; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 3; i++) {
		if (arr[i] == arr[(i + 1) % 3] + arr[(i + 2) % 3]) {
			check = 1;
			break;
		}
	}
	printf("%d\n", check);
	return 0;
}
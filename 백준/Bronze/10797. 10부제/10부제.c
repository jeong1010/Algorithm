#include <stdio.h>
int main() {
	int n, cnt=0;
	int arr[5];
	scanf("%d", &n);
	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 5; i++) {
		if (arr[i] == n) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
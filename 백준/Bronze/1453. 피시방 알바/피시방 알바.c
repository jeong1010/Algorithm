#include <stdio.h>
int main() {
	int n, input, sum=0;
	int arr[100] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		if (arr[input - 1] >= 1)sum++;
		arr[input - 1]++;
	}
	printf("%d\n", sum);
	return 0;
}
#include <stdio.h>
#include <limits.h>
int main() {
	int arr[10];
	int max = INT_MIN;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max) max = arr[i];
	}
	printf("%d\n", max);
	return 0;
}
#include <stdio.h>
int main() {
	int arr[7];
	int sum = 0, min = 999;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] % 2 == 1) 
		{
			sum += arr[i];
			if (min > arr[i]) min = arr[i];
		}
	}
	if (sum == 0) printf("-1\n");
	else printf("%d\n%d\n", sum, min);
	return 0;
}
#include <stdio.h>
int main() {
	int arr[5];
	int sum = 0, tmp, j;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &tmp);
		sum += tmp;
		if (i == 0)arr[i] = tmp;
		else
		{
			for (j = i; (arr[j - 1] > tmp) && j >=0 ; j--) {
				arr[j] = arr[j - 1];
			}
			arr[j] = tmp;
		}
	}
	
	printf("%d\n%d", sum / 5, arr[5 / 2]);
}
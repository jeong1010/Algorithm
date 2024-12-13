#include <stdio.h>
int main() {
	int arr[3];
	int cur, j;
	for(int i=0;i<3;i++)
	{
		scanf("%d", &arr[i]);
		if (i == 0)continue;
		cur = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > cur) {
				arr[j + 1] = arr[j];
			}
			else break;
		}
		arr[j + 1] = cur;
	}
	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);
	return 0;
}
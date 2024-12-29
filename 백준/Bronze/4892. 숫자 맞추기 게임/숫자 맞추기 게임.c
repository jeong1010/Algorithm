#include <stdio.h>
#include <stdlib.h>
int main() {
	int i=0;
	int* arr;
	arr = (int*)malloc(sizeof(int) * 1000000);
	while(1)
	{
		scanf("%d", &arr[i++]);
		if (arr[i-1] == 0)break;
	}
	for (int j = 0; j < i-1; j++) {
		printf("%d. ", j+1);
		arr[j] = arr[j] * 3;
		if (arr[j] % 2 == 0) {
			printf("even ");
			arr[j] /= 2;
		}
		else {
			printf("odd ");
			arr[j] = (arr[j] + 1) / 2;
		}
		printf("%d\n", arr[j] * 3 / 9);
	}
	free(arr);
	return 0;
}
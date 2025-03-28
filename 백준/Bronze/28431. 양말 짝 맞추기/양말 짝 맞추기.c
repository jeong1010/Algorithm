#include <stdio.h>
int main() {
	int y = 5, input;
	int arr[10] = { 0, };
	for (int i = 0; i < y; i++) {
		scanf("%d", &input);
		arr[input]++;
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 1) 
		{
			printf("%d\n", i);
			break;
		}
	}
}
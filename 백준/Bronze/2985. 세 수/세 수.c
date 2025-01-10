#include <stdio.h>
int main() {
	int arr[3];
	char c1, c2;
	for (int i = 0; i < 3; i++)
		scanf("%d", &arr[i]);
	if (arr[0] + arr[1] == arr[2])
		c1 = '+', c2 = '=';
	else if (arr[0] - arr[1] == arr[2])
		c1 = '-', c2 = '=';
	else if (arr[0] * arr[1] == arr[2])
		c1 = '*', c2 = '=';
	else if (arr[0] / arr[1] == arr[2])
		c1 = '/', c2 = '=';
	else if (arr[1] + arr[2] == arr[0])
		c1 = '=', c2 = '+';
	else if (arr[1] - arr[2] == arr[0])
		c1 = '=', c2 = '-';
	else if (arr[1] * arr[2] == arr[0])
		c1 = '=', c2 = '*';
	else if (arr[1] / arr[2] == arr[0])
		c1 = '=', c2 = '/';

	printf("%d%c%d%c%d\n", arr[0], c1, arr[1], c2, arr[2]);
	return 0;
}
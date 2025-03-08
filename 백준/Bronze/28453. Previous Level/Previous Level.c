#include <stdio.h>
int main() {
	int n, grade;
	int arr[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 300)grade = 1;
		else if (arr[i] >= 275)grade = 2;
		else if (arr[i] >= 250)grade = 3;
		else grade = 4;

		printf("%d ", grade);

	}
	printf("\n");
	return 0;
}
#include <stdio.h>
int main() {
	int a[3];
	int r[3];
	int sum = 0;
	for (int i = 0; i < 3; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < 3; i++)
		scanf("%d", &r[i]);
	for (int i = 0; i < 3; i++)
		sum += a[i] < r[i] ? r[i] - a[i] : 0;
	printf("%d\n", sum);
	return 0;
}
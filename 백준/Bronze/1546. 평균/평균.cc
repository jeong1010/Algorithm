#include <stdio.h>
#include <malloc.h>
int main() {
	int n, i;
	float max = 0, sum=0;
	float* arr;

	scanf("%d", &n);
	arr = (float*)malloc(sizeof(float) * n);

	for (i = 0; i < n; i++) {
		scanf("%f", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
	}
	for (i = 0; i < n; i++) {
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}
	printf("%f", sum / n);

	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	int max = 0, sum = 0;
	int in, out;
	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &out, &in);
		sum += in, sum -= out;
		if (sum > max)max = sum;
	}
	printf("%d\n", max);
	return 0;
}
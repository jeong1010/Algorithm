#include <stdio.h>
#define MAX_SIZE 1000000
int main() {
	int max = -1;
	int n, k, before, after = 0, size = MAX_SIZE;
	int rev[7];
	int index = 0, tmp, tmpSize=10, cnt=1;
	scanf("%d %d", &n, &k);
	// 
	for (int i = 1; i <= k; i++) {
		before = n * i;
		tmp = before;
		while (tmp / 10 > 0) {
			tmp /= 10;
			cnt++;
		}
		while (size != 1) {
			rev[index++] = before / size;
			before = before % size;
			size /= 10;
		}
		rev[index] = before;
		for (int j = 7 - cnt; j < 7; j++) {
			after += rev[j] * size;
			size *= 10;
		}
		// printf("%d\n", after);
		if (max < after) max = after;
		after = 0;
		size = MAX_SIZE;
		index = 0;
		cnt = 1;
	}
	printf("%d\n", max);
	return 0;
}
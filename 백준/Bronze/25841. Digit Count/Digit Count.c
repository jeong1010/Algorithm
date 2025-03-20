#include <stdio.h>
int main() {
	int start, end, c, cnt, sum = 0, tmp;
	scanf("%d %d %d", &start, &end, &c);
	for (int i = start; i <= end; i++) {
		tmp = i;
		cnt = 0;
		for (int j = 0; j < 4; j++) {
			if (tmp % 10 == c) cnt++;
			tmp /= 10;
		}
		sum += cnt;
	}
	printf("%d\n", sum);
	return 0;
}
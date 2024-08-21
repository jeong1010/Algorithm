#include <stdio.h>
int eq(int a, int b) {
	int cnt = 1;
	int sum = 0, tmp;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < i + 1; j++) {
			tmp = i + 1;
			if (cnt >= a && cnt <= b)
				sum += tmp;
			else if (cnt >= b) return sum;
			cnt++;
		}
	}
	return sum;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", eq(a, b));
	return 0;
}
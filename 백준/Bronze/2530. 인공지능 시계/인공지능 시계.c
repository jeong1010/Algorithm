#include <stdio.h>
void endTime(int h, int m, int s, int n) {
	s += n;
	while(s >= 60) {
		s -= 60;
		m++;
		if (m >= 60) {
			m -= 60;
			h++;
			if (h >= 24) {
				h -= 24;
			}
		}
	}
	printf("%d %d %d\n", h, m, s);
}
int main() {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &d);
	endTime(a, b, c, d);
	return 0;
}
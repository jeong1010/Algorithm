#include <stdio.h>
int main() {
	int e, i=1;
	double l, r, t, pi = 3.1415927;
	double dist, mh;
	while (1) {
		e = scanf("%lf %lf %lf", &l, &r, &t);
		if (e == EOF) break;
		if (r == 0)continue;
		l /= 12;
		l /= 5280;
		dist = l * pi * r;
		t /= 3600;
		mh = dist / t;
		printf("Trip #%d: %.2lf %.2lf\n", i++, dist, mh);
	}
	return 0;
}
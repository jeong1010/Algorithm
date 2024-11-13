#include <stdio.h>
#include <math.h>
int main() {
	int d, h, w;
	float r, rh, rw;
	scanf("%d %d %d", &d, &h, &w);
	r = (float)sqrt((int)pow(h, 2) + (int)pow(w, 2));
	// r: h: w
	r = (float)d / r;
	rh = r * h, rw = r * w;
	if (rh < (int)rh) rh = (int)rh - 1;
	if (rw < (int)rw) rw = (int)rw - 1;
	printf("%d %d\n", (int)rh, (int)rw);
	return 0;
}
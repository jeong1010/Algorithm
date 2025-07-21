#include <stdio.h>
#include <math.h>
int main() {
	float d, h, rh, rv, w;
	while (1) {
		scanf(" %f %f %f", &d, &rh, &rv);
		if (d == 0 && rh == 0 && rv == 0) break;
		w = 16 * d / sqrt(337);
		h = 9.0 / 16 * w;
		printf("Horizontal DPI: %.2f\nVertical DPI: %.2f\n", rh / w, rv / h);
	}
	return 0;
}
#include <stdio.h>
#include <math.h>
int main() {
	int br, bc, dr, dc, jr, jc;
	int bSum = 0, dSum = 0;
	scanf("%d %d", &br, &bc);
	scanf("%d %d", &dr, &dc);
	scanf("%d %d", &jr, &jc);
	dSum += (jr - dr >= 0 ? jr - dr : -(jr - dr)) + (jc - dc >= 0 ? jc - dc : -(jc - dc));
	if (br == jr) {
		bSum += (bc - jc >= 0 ? bc - jc : -(bc - jc));
	}
	else if (bc == jc) {
		bSum += (br - jr >= 0 ? br - jr : -(br - jr));
	}
	else {
		bSum += sqrt(pow(br - jr, 2) + pow(bc - jc, 2));
	}

	if (bSum > dSum) printf("daisy\n");
	else if (bSum == dSum) printf("tie\n");
	else printf("bessie\n");
	return 0;
}
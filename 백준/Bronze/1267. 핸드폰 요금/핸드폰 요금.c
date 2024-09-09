#include <stdio.h>
int main() {
	int n, tmp, sumY = 0, sumM = 0;
	scanf("%d", &n);
	for (int k = 0; k < n; k++) {
		scanf("%d", &tmp);
		sumY += (tmp / 30 + 1) * 10;
		sumM += (tmp / 60 + 1) * 15;
	}
	if (sumY > sumM)printf("M ");
	else if (sumM > sumY)printf("Y ");
	else printf("Y M ");
	printf("%d\n", sumY < sumM ? sumY : sumM);
	return 0;
}
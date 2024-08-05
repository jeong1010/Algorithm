#include <stdio.h>
int minValue(int a, int b) {
	if (a < b) return a;
	else return b;
}
int main() {
	int bur[3];
	int minBur;
	int juice[2];
	int minJuice = 2000;
	int off = 50;
	for(int i=0;i<3;i++)
		scanf("%d", &bur[i]);
	for (int i = 0; i < 2; i++)
		scanf("%d", &juice[i]);
	minBur = minValue(minValue(bur[0], bur[1]), bur[2]);
	minJuice = minValue(juice[0], juice[1]);
	printf("%d\n", minBur + minJuice - off);
	return 0;
}
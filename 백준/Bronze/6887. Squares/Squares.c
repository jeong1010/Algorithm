#include <stdio.h>
#include <math.h>
int main() {
	int tile, length;
	scanf("%d", &tile);
	length = (int)sqrt(tile);
	printf("The largest square has side length %d.\n", length);
	return 0;
}
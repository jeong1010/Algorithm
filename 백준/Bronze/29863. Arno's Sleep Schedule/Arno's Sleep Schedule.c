#include <stdio.h>
int main() {
	int start, end;
	scanf("%d", &start);
	scanf("%d", &end);
	printf("%d", start >= end ? 24 - start + end : end - start);
	return 0;
}
#include <stdio.h>
int main() {
	int t, w, h;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &w, &h);
		printf("%d\n", w * h / 2);
	}
	return 0;
}
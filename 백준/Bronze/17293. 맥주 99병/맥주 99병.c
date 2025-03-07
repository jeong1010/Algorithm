#include <stdio.h>
int main() {
	int n, i;
	scanf("%d", &n);
	for (i = n; i >= 0; i--) {
		if (i > 1)
			printf("%d bottles of beer on the wall, %d bottles of beer.\n", i, i);
		else if (i == 1)
			printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
		else // 0
		{
			printf("No more bottles of beer on the wall, no more bottles of beer.\n");
			if(n != 1)
				printf("Go to the store and buy some more, %d bottles of beer on the wall.\n", n);
			else
				printf("Go to the store and buy some more, 1 bottle of beer on the wall.\n");
			break;
		}

		printf("Take one down and pass it around, ");
		if (i - 1 > 1)
			printf("%d bottles of beer on the wall.\n\n", i - 1);
		else if (i - 1 == 1)
			printf("1 bottle of beer on the wall.\n\n");
		else // 0
			printf("no more bottles of beer on the wall.\n\n");
	}
	return 0;
}
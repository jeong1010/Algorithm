#include <stdio.h>
int main() {
	int input, min = 101, index = -1, sum = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &input);
		sum += input;
		if (input < min) 
		{
			min = input;
			index = i;
		}
	}
	if (sum < 100) {
		switch (index)
		{
		case 0:
			printf("Soongsil\n");
			break;
		case 1:
			printf("Korea\n");
			break;
		case 2:
			printf("Hanyang\n");
			break;
		}
	}
	else printf("OK\n");
	return 0;
}
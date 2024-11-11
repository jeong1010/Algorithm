#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n * 5; i++) {
		if(i < n*4){
			for (int j = 0; j < n; j++)
				printf("@");
		}
		else {
			for (int j = 0; j < n * 5; j++)
				printf("@");
		}
		printf("\n");
	}
	return 0;
}
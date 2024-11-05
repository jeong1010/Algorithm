#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n * 5; i++) {
		if(i < n || i >= n*5 - n){
			for (int j = 0; j < n * 5; j++)
				printf("@");
		}
		else {
			for (int j = 0; j < n; j++)
				printf("@");
		}
		printf("\n");
	}
	return 0;
}
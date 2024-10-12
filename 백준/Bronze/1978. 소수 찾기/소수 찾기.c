#include <stdio.h>
#include <stdlib.h>
int isPrime(int input) {
	if (input == 1)return 0;
	for (int j = 2; j < input; j++) {
		if (input % j == 0) return 0;
	}
	return 1;
}
int main() {
	int n, cnt=0;
	int* input;
	scanf("%d", &n);
	input = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
	}
	for (int i = 0; i < n; i++) {
		cnt += isPrime(input[i]);
	}
	printf("%d\n", cnt);
	free(input);
	return 0;
}
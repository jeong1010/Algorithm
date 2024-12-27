#include <stdio.h>
#include <stdlib.h>
void push(int* arr, int* top, int data) {
	arr[++(*top)] = data;
}
int pop(int *arr, int *top) {
	if (*top == -1)return 0;
	return arr[(*top)--];
}
int main() {
	int* s1;
	int top = -1;
	int k, input;
	scanf("%d", &k);
	s1 = (int*)malloc(sizeof(int) * k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &input);
		if (input == 0) {
			pop(s1, &top);
		}
		else {
			push(s1, &top, input);
		}
	}
	k = 0;
	while (top > -1) {
		k += pop(s1, &top);
	}
	printf("%d\n", k);
	return 0;
}
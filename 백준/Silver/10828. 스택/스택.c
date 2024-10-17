#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isEmpty(int top) {
	if (top == -1)
		return 1;
	else return 0;
}
int rtnTop(int arr[], int top) {
	if (isEmpty(top))return -1;
	return arr[top];
}
void push(int arr[], int* top, int item) {
	arr[++(*top)] = item;
}
int pop(int arr[], int* top) {
	if (isEmpty(*top)) return -1;
	return arr[(*top)--];
}
int size(int top) {
	return (top + 1);
}
int main() {
	int* data;
	int n, top = -1, item;
	char f[6];
	scanf("%d", &n);
	data = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%s", f);
		if (strcmp(f, "push") == 0) {
			scanf("%d", &item);
			push(data, &top, item);
		}
		else if (strcmp(f, "pop") == 0) {
			printf("%d\n", pop(data, &top));
		}
		else if (strcmp(f, "size") == 0) {
			printf("%d\n", size(top));
		}
		else if (strcmp(f, "empty") == 0) {
			printf("%d\n", isEmpty(top));
		}
		else if (strcmp(f, "top") == 0) {
			printf("%d\n", rtnTop(data, top));
		}
	}
	return 0;
}
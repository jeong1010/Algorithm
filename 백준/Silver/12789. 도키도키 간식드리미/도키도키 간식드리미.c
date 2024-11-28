#include <stdio.h>
#include <stdlib.h>
void push(int* stack, int *top, int item) {
	stack[++(*top)] = item;
}
int peak(int* stack, int top) {
	if (top == -1)return -1;
	return stack[top];
}
int pop(int* stack, int* top) {
	if (*top == -1)return -1;
	return stack[(*top)--];
}
int main() {
	int *s1, *arr;
	int n, top = -1, cnt=0, tmp=1, k;
	int isFail = 1;
	scanf("%d", &n);
	s1 = (int*)malloc(sizeof(int) * n);
	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < n; i++) {
		while(peak(s1, top) == tmp) {
			pop(s1, &top);
			cnt++;
			tmp++;
		}
		if (arr[i] == tmp) {
			cnt++;
			tmp++;
			continue;
			
		}
		else {
			if (peak(s1, top) == -1 || peak(s1, top) >= arr[i])
			{
				push(s1, &top, arr[i]);
			}
			else {
				isFail = 1;
				break;
			}
		}
	}

	while (peak(s1, top) != -1) {
		k = pop(s1, &top);
		cnt++;
	}

	if (cnt == n) isFail = 0;

	if (isFail == 0)
		printf("Nice\n");
	else
		printf("Sad\n");

	return 0;
}
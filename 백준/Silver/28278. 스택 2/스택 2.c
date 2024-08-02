#include <stdio.h>
#define MAX_SIZE 1000000
int main() {
	int top = -1;
	int n, func, x;
	int stack[MAX_SIZE];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &func);
		switch (func) {
		case 1:
			scanf("%d", &x);
			top++;
			stack[(top)] = x;
			break;
		case 2:
			if (top == -1)printf("%d\n", -1);
			else printf("%d\n", stack[(top--)]);
			break;
		case 3:
			printf("%d\n", top + 1);
			break;
		case 4:
			if (top == -1)printf("%d\n", 1);
			else printf("%d\n", 0);
			break;
		case 5:
			if (top == -1)printf("%d\n", -1);
			else printf("%d\n", stack[top]);
			break;
		}
	}
	return 0;
}
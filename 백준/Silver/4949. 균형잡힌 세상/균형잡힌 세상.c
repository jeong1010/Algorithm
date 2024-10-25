#include <stdio.h>
#include <string.h>
void push(char arr[], int *top, char item) {
	arr[++(*top)] = item;
}
char pop(char arr[], int* top) {
	return arr[(*top)--];
}
int main() {
	char txt[101];
	char stack[100];
	char tmp;
	int top, isComp;
	while (1) {
		//scanf("%[^\n]s ", txt);
		gets(txt);
		if (strcmp(txt, ".") == 0) break;
		isComp = 1, top = -1, strcat(stack, "");
		for (int i = 0; i < strlen(txt); i++) {
			switch (txt[i]) {
			case '(': case '{': case '[':
				push(stack, &top, txt[i]);
				break;
			case ')': case '}': case ']':
				if (top == -1)
					isComp = 0;
				else {
					tmp = pop(stack, &top);
					switch (tmp) {
					case '(':
						if (txt[i] != ')') isComp = 0;
						break;
					case '{':
						if (txt[i] != '}') isComp = 0;
						break;
					case '[':
						if (txt[i] != ']') isComp = 0;
						break;
					}
				}
				break;
			}
			if (isComp == 0)break;
		}
		if(isComp && top == -1)  printf("yes\n");
		else printf("no\n");
		
	}
}
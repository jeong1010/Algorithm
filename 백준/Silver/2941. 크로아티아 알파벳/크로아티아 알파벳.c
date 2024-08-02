#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
// 2941
typedef struct stackType {
	char data[MAX_SIZE];
	int top;
}stackType;

int isEmpty(stackType* s) {
	return (s->top == -1);
}

int isFull(stackType* s) {
	return(s->top == MAX_SIZE);
}

void stack_init(stackType* s) {
	s->top = -1;
}

void push(stackType* s, char item) {
	if (isFull(s)) return;
	s->data[++(s->top)] = item;
}

char pop(stackType* s) {
	if (isEmpty(s)) return;
	int tmp = s->data[(s->top)--];
	return tmp;
}

char peek(stackType* s) {
	if (isEmpty(s)) return;
	return s->data[s->top];
}

int main() {
	char str[101];
	char c;
	int cnt = 0;
	stackType stack1;
	stack_init(&stack1);

	scanf("%s", str);

	push(&stack1, str[0]);
	for (int i = 1; i < strlen(str); i++) {
		c = peek(&stack1);
		if (c == 'c' && (str[i] == '=' || str[i] == '-'));
		//push(&stack1, str[i]);
		else if (c == 'd' && ((str[i] == 'z' && str[i+1] == '=') || str[i] == '-'));
		//push(&stack1, str[i]);
		else if (c == 'l' && str[i] == 'j');
		//push(&stack1, str[i]);
		else if (c == 'n' && str[i] == 'j');
		//push(&stack1, str[i]);
		else if (c == 's' && str[i] == '=');
		//push(&stack1, str[i]);
		else if (c == 'z' && str[i] == '=');
			//push(&stack1, str[i]);
		else {
			//printf("%c %c\n", c, str[i]);
			while (!isEmpty(&stack1)) {
				pop(&stack1);
			}
			cnt++;
			//push(&stack1, str[i]);
		}
		push(&stack1, str[i]); 
	}
	while (!isEmpty(&stack1)) {
		pop(&stack1); 
	}
	cnt++;
	printf("%d\n", cnt);
	return 0;
}
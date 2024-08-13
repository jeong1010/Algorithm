#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 51

typedef char element;
typedef struct {
	element data[MAX_SIZE];
	int top;
}stackType;
void initStack(stackType* s) {
	s->top = -1;
}
int isEmpty(stackType *s) {
	return s->top == -1;
}
int isFull(stackType* s) {
	return s->top == MAX_SIZE;
}
void push(stackType* s, element item) {
	if (isFull(s)) return;
	s->data[++(s->top)] = item;
}
element pop(stackType* s) {
	if (isEmpty(s)) return -1;
	return s->data[(s->top)--];
}
element peek(stackType* s) {
	if (isEmpty(s)) return -1;
	return s->data[s->top];
}
int isVPS(stackType* s, char* str) {
	for (int i = 0; i < strlen(str); i++) {
		switch (str[i]) {
		case '(':
			push(s, '(');
			break;
		case ')':
			if(peek(s) == -1) return -1;
			pop(s);
			break;
		}
	}
	if (!isEmpty(s)) return -1;
	else return 1;
}

int main() {
	char str[51];
	int t;
	stackType* stack1 = (stackType*)malloc(sizeof(stackType));
	initStack(stack1);

	scanf("%d", &t);
	
	for (int i = 0; i < t; i++) {
		scanf("%s", str);
		if (isVPS(stack1, str) == 1)printf("YES\n");
		else printf("NO\n");
		initStack(stack1); 
	}
	free(stack1);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node* next;
}node;

node* insertNode(node *root, int data) {
	node* newNode = (node*)malloc(sizeof(node));
	node* p;
	newNode->data = data;
	newNode->next = NULL;
	if (root == NULL)
		return newNode;
	p = root;
	while (p->next != NULL)p = p->next;
	p->next = newNode;
	return root;
}

int main() {
	int n, input;
	node* arr = NULL, *p;
	scanf("%d", &n);
	do {
		scanf("%d", &input); 
		if (input == 0)
			break;
		arr = insertNode(arr, input);
	} while (input != 0);
	p = arr;
	while (p != NULL) {
		printf("%d is ", p->data);
		if (p->data % n != 0)
			printf("NOT ");
		printf("a multiple of %d.\n", n);
		p = p->next;
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node {
	int cm;
	struct node* next;
}node;
node* insertNode(node* n, int data) {
	node* p = n;
	node* newNode = (node*)malloc(sizeof(node));
	newNode->cm = data;
	newNode->next = NULL;

	if (n == NULL)return newNode;

	while (p->next != NULL)
		p = p->next;
	p->next = newNode;
	return n;
}
int main() {
	node* rslt = NULL;
	node* p;
	int sum;
	char input[5];
	do {
		scanf("%s", input);
		if (strcmp(input, "0") == 0)
			break;
		sum = 1;
		for (int i = 0; input[i] != '\0'; i++) {
			if (input[i] == '1')
				sum += 2;
			else if (input[i] == '0')
				sum += 4;
			else
				sum += 3;
			sum += 1;
		}
		rslt = insertNode(rslt, sum);
	} while (1);
	p = rslt;
	while (p != NULL) {
		printf("%d\n", p->cm);
		p = p->next;
	}
	return 0;
}
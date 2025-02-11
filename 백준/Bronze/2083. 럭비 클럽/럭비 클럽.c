#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
typedef struct node {
	char name[11];
	int age;
	int kg;
	struct node* next;
}node;
node* createNode(node* n, char name[11], int age, int kg) {
	node* newNode = (node*)malloc(sizeof(node));
	strcpy(newNode->name, name);
	newNode->age = age, newNode->kg = kg;
	newNode->next = NULL;

	node* p;
	if (n == NULL) return newNode;
	p = n;
	while (p->next != NULL) p = p->next;
	p->next = newNode;
	return n;
}
int main() {
	node* root = NULL;
	node* p;
	char name[11];
	int age, kg;
	while (1) {
		scanf("%s %d %d", name, &age, &kg);
		if (strcmp(name, "#") == 0 && age == 0 && kg == 0)
			break;
		root = createNode(root, name, age, kg);
	}
	p = root;
	while (p != NULL) {
		printf("%s ", p->name);
		if (p->age > 17 || p->kg >= 80) printf("Senior\n");
		else printf("Junior\n");
		p = p->next;
	}

	return 0;
}
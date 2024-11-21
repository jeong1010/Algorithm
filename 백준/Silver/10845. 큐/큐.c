#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct nodeType {
	int data;
	struct nodeType* next;
}nodeType;

nodeType* push(nodeType* node, int item) {
	nodeType* p = node;
	nodeType* newNode = (nodeType*)malloc(sizeof(nodeType));
	newNode->data = item;
	newNode->next = NULL;

	if (node == NULL) return newNode;
	else {
		while (p->next != NULL) p = p->next;
		p->next = newNode;
	}

	return node;
}

nodeType* pop(nodeType* node) {
	int r;
	nodeType* old = node;
	if (node == NULL) {
		printf("%d\n", -1);
		return NULL;
	}
	printf("%d\n", node->data);
	node = node->next;
	
	free(old);
	return node;
}

int size(nodeType* node) {
	nodeType* p = node;
	int cnt = 0;
	while (p != NULL) {
		cnt++;
		p = p->next;
	}
	return cnt;
}

int empty(nodeType* node) {
	return (node == NULL);
}

int front(nodeType* node) {
	if (node == NULL) return -1;
	return node->data;
}

int back(nodeType* node) {
	nodeType* p = node;
	if (node == NULL) return -1;
	while (p->next != NULL) p = p->next;
	return p->data;
}

int main() {
	char cmd[6];
	int n, num;
	nodeType* q = NULL;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", cmd);
		if (strcmp(cmd, "push") == 0) {
			scanf("%d", &num);
			q = push(q, num);
		}
		else if (strcmp(cmd, "pop") == 0) {
			q = pop(q);
		}
		else if (strcmp(cmd, "size") == 0) {
			printf("%d\n", size(q));
		}
		else if (strcmp(cmd, "empty") == 0) {
			printf("%d\n", empty(q) == 1 ? 1 : 0);
		}
		else if (strcmp(cmd, "front") == 0) {
			printf("%d\n", front(q));
		}
		else if (strcmp(cmd, "back") == 0) {
			printf("%d\n", back(q));
		}
	}
	return 0;
}
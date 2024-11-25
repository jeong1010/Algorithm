#include <stdio.h>
#include <stdlib.h>
typedef struct nodeType {
	char data;
	struct nodeType* left;
	struct nodeType* right;
}nodeType;

nodeType* findNode(nodeType* node, char item) {
	if (node == NULL) return NULL;
	if (node->left != NULL && node->left->data == item) return node;
	else if (findNode(node->left, item) != NULL) return findNode(node->left, item);
	else if (findNode(node->right, item) != NULL) return findNode(node->right, item);
	return NULL;
}

nodeType* findNode2(nodeType* node, char item) {
	if (node == NULL) return NULL;
	if (node->right != NULL && node->right->data == item) return node;
	else if (findNode2(node->left, item) != NULL) return findNode2(node->left, item);
	else if (findNode2(node->right, item) != NULL) return findNode2(node->right, item);
	return NULL;
}

nodeType* insertNode(nodeType* node, char par, char l, char r) {
	nodeType* p;
	nodeType* newNode = (nodeType*)malloc(sizeof(nodeType));
	newNode->data = par;
	newNode->left = NULL;
	newNode->right = NULL;
	if (l != '.')
		newNode->left = insertNode(newNode->left, l, '.', '.');
	if (r != '.')
		newNode->right = insertNode(newNode->right, r, '.', '.');
		
	if (node == NULL) return newNode;

	p = findNode(node, par);
	if (p != NULL)
	{
		free(p->left);
		p->left = newNode;
	}
	else {
		p = findNode2(node, par);
		if (p != NULL)
		{
			free(p->right);
			p->right = newNode;
		}
	}
	return node;
}

void prePrn(nodeType* node) {
	if (node == NULL) return;
	printf("%c", node->data);
	prePrn(node->left);
	prePrn(node->right);
}

void inPrn(nodeType* node) {
	if (node == NULL) return;
	inPrn(node->left);
	printf("%c", node->data);
	inPrn(node->right);
}

void postPrn(nodeType* node) {
	if (node == NULL) return;
	postPrn(node->left);
	postPrn(node->right);
	printf("%c", node->data);
}

int main() {
	nodeType* t1 = NULL;
	int n;
	char cur, l, r;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %c %c %c", &cur, &l, &r);
		t1 = insertNode(t1, cur, l, r);
	}

	prePrn(t1);
	printf("\n");
	inPrn(t1);
	printf("\n");
	postPrn(t1);
	printf("\n");
}
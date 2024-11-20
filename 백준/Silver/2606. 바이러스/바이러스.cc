#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct nodeType {
	int data;
	struct nodeType* next;
}nodeType;

nodeType* insertNode(nodeType* node, int item) {
	nodeType* p = node;
	nodeType* newNode = (nodeType*)malloc(sizeof(nodeType));
	newNode->data = item;
	newNode->next = NULL;

	if (node == NULL)
		return newNode;
	else {
		while (p->next != NULL) p = p->next;
		p->next = newNode;
	}

	return node;
}

void dfs(nodeType** g1, int u, short visited[]) {
	visited[u] = 1;
	nodeType* p = g1[u];
	while (p != NULL) {
		if (visited[p->data] != 1)
			dfs(g1, p->data, visited);
		p = p->next;
	}
}

int main() {
	nodeType** g1;
	nodeType* q;
	int n, f, n1, n2, cnt=0;
	short* visited;
	
	scanf("%d", &n);
	g1 = (nodeType**)malloc(sizeof(nodeType*) * n);
	for (int i = 0; i < n; i++) {
		g1[i] = NULL;
	}
	visited = (short*)malloc(sizeof(short) * n);
	memset(visited, 0, sizeof(short) * n);

	scanf("%d", &f);
	for (int i = 0; i < f; i++) {
		scanf("%d %d", &n1, &n2);
		g1[n1 - 1] = insertNode(g1[n1 - 1], n2-1);
		g1[n2 - 1] = insertNode(g1[n2 - 1], n1 - 1);
	}

	//for (int i = 0; i < n; i++) {
		//q = g1[i];
		//printf("%d: ", i);
		//while (q != NULL)
		//{
			//printf("%d ", q->data);
			//q = q->next;
		//}
		//printf("\n");
	//}

	dfs(g1, 0, visited);

	for (int i = 0; i < n; i++) {
		if (visited[i] == 1)cnt++;
	}

	printf("%d\n", cnt - 1);

	return 0;
}
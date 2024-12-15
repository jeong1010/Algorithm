#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define INF 100000000
typedef struct node {
	int to;
	int weight;
	struct node* next;
}nodeType;

void insertNode(nodeType** li, int f, int t, int w) {
	nodeType* nNode = (nodeType*)malloc(sizeof(nodeType));
	nNode->to = t;
	nNode->weight = w;
	if (li[f - 1] == NULL) {
		nNode->next = NULL;
		li[f - 1] = nNode;
	}
	else {
		nNode->next = li[f - 1];
		li[f - 1] = nNode;
	}
}
int minCost(int* cost, short visited[], int n) {
	int min = INF, minIndex = -1;
	for (int i = 0; i < n; i++) {
		if (cost[i] < min && visited[i] == 0) {
			min = cost[i];
			minIndex = i;
		}
	}
	return minIndex;
}
int dikstra(nodeType** li, short visited[], int* cost, int* before, int n, int from, int to) {
	visited[from - 1] = 1;
	cost[from - 1] = 0;
	int mindex = from - 1;
	nodeType* tmp;
	while (visited[to - 1] == 0) {
		tmp = li[mindex];
		while (tmp != NULL) {
			if(visited[tmp->to - 1] == 0 && cost[mindex] < INF)
			{
				if(cost[tmp->to - 1] > cost[mindex] + tmp->weight)
				{
					cost[tmp->to - 1] = cost[mindex] + tmp->weight;
					before[tmp->to - 1] = mindex;
				}
			}
			tmp = tmp->next;
		}

		mindex = minCost(cost, visited, n);
		visited[mindex] = 1;		
	}
	return cost[to - 1];
}

int main() {
	nodeType** l1;
	short* visited;
	int* cost, *before;
	int n, m;
	int to, from, w;
	scanf("%d", &n);
	scanf("%d", &m);

	l1 = (nodeType**)malloc(sizeof(nodeType*)*n);
	for (int i = 0; i < n; i++)
		l1[i] = NULL;
	visited = (short*)malloc(sizeof(short) * n);
	memset(visited, 0, sizeof(short) * n);
	cost = (int*)malloc(sizeof(int) * n);
	before = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		cost[i] = INF; // = 무한
	
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &from, &to, &w);
		insertNode(l1, from, to, w);
	}

	scanf("%d %d", &from, &to);
	m = dikstra(l1, visited, cost, before, n, from, to);
	printf("%d\n", m);
	return 0;
}
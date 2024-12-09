#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 1000
void dfs(int** arr, int v, int n, int visited[]) {
	printf("%d ", v);
	visited[v - 1] = 1;
	for (int i = 0; i < n; i++) {
		if (arr[v - 1][i] == 1 && visited[i] == 0)
			dfs(arr, i + 1, n, visited);
	}
}
void bfs(int** arr, int v, int n, int visited[]) {
	int c = v;
	visited[c - 1] = 1;
	int queue[SIZE];
	int top = -1, rear = -1;
	queue[++rear] = c-1;
	while (top != rear) {
		c = queue[++top];
		printf("%d ", c + 1);
		for (int i = 0; i < n; i++) {
			if (arr[c][i] == 1 && visited[i] == 0)
			{
				queue[++rear] = i;
				visited[i] = 1;
			}
		}
	}
	printf("\n");
}
int main() {
	int n, m, v, v1,v2;
	int** arr;
	int* visited;

	scanf("%d %d %d", &n, &m, &v);
	arr = (int**)malloc(sizeof(int*) * n);
	visited = (int*)malloc(sizeof(int) * n);
	memset(visited, 0, sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * n);
		memset(arr[i], 0, sizeof(int) * n);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &v1, &v2);
		arr[v1 - 1][v2 - 1] = 1;
		arr[v2 - 1][v1 - 1] = 1;
	}
	dfs(arr, v, n, visited);
	printf("\n");
	memset(visited, 0, sizeof(int) * n);
	bfs(arr, v, n, visited);

	for (int i = n - 1; i >= 0; i--)
		free(arr[i]);
	free(arr);
	return 0;
}
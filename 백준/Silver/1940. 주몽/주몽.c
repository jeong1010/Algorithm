#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m, cnt=0;
	int* arr;
	scanf("%d", &n);
	scanf("%d", &m);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] + arr[j] == m)cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
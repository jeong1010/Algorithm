#include <stdio.h>
#include <stdlib.h>

int main() {
	int **arr1;
	int **arr2;
	int ns, ms, tmp,i,j;
	scanf("%d %d", &ns, &ms);

	arr1 = (int**)malloc(sizeof(int*) * ns);
	arr2 = (int**)malloc(sizeof(int*) * ns);
    
    arr1[0] = (int*)malloc(sizeof(int) * ns*ms);
    arr2[0] = (int*)malloc(sizeof(int) * ns*ms);
    
	for (i = 1; i < ns; i++) {
		arr1[i] = arr1[i-1] + ms;
		arr2[i] = arr2[i-1] + ms;
	}

	for (i = 0; i < ns; i++) {
		for (j = 0; j < ms; j++) {
			scanf("%d", &tmp);
			arr1[i][j] = tmp;
		}
	}
	for (i = 0; i < ns; i++) {
		for (j = 0; j < ms; j++) {
			scanf("%d", &tmp);
			arr2[i][j] = arr1[i][j] + tmp;
		}
	}
	for (i = 0; i < ns; i++) {
		for (j = 0; j < ms; j++)
			printf("%d ", arr2[i][j]);
		printf("\n");
	}

	free(arr1[0]);
	free(arr2[0]);
	free(arr1);
	free(arr2);

	return 0;
}
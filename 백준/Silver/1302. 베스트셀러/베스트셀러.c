#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	int cnt;
	char title[51];
}book;
int main() {
	int n, bookCnt=0, isExist, j;
	int max = -1, maxIndex = -1;
	book* arr;
	char txt[51];
	scanf("%d", &n);
	arr = (book*)malloc(sizeof(book) * n);

	for (int i = 0; i < n; i++) {
		isExist = 0;
		scanf("%s", txt);
		for (j = 0; j < bookCnt; j++) {
			if (strcmp(arr[j].title, txt) == 0)
			{
				isExist = 1;
				break;
			}
		}
		if (isExist) {
			arr[j].cnt++;
		}
		else {
			strcpy(arr[bookCnt].title, txt);
			arr[bookCnt].cnt = 0;
			bookCnt++;
		}
	}
	for (int i = 0; i < bookCnt; i++) {
		if (max < arr[i].cnt)
		{
			max = arr[i].cnt;
			maxIndex = i;
		}
		else if (max == arr[i].cnt) {
			maxIndex = (strcmp(arr[i].title, arr[maxIndex].title) < 0) ? i : maxIndex;
		}
	}
	printf("%s\n", arr[maxIndex].title);

	free(arr);
	return 0;
}
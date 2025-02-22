#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
	char s[100001];
	struct node* next;
}node;

void cGame(char* s) {
	printf("%s ", s);
	if (strlen(s) == 1) return;
	char* res;
	int num = 1, tmp, len=1;
	for (int i = 0; i < s[i] != '\0'; i++) {
		num  *= s[i] - '0';
	}
	tmp = num;
	while (tmp / 10 != 0) {
		tmp /= 10;
		len++;
	}
	res = (char*)malloc(sizeof(char) * len);
	for (int i = 0; i < len; i++) {
		res[len - i - 1] = (num % 10) + '0';
		num /= 10;
	}
	res[len] = '\0';
	return cGame(res);
}
node* append(node* n, char* s) {
	node* p = n;
	node* newNode = (node*)malloc(sizeof(node));
	strcpy(newNode->s, s);
	newNode->next = NULL;
	if (n == NULL)return newNode;
	while (p->next != NULL) p = p->next;
	p->next = newNode;
	return n;
}
int main() {
	node* arr = NULL, *p;
	char input[100001];
	while (1) {
		scanf("%s", input);
		if (strcmp(input, "0") == 0)break;
		arr = append(arr, input);
	}
	p = arr;
	while (p != NULL) {
		cGame(p->s);
		printf("\n");
		p = p->next;
	}
	return 0;
}
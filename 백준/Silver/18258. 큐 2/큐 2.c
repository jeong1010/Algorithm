#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef int element;
typedef struct queue {
	element data;
	struct queue* next;
}queueType;

element qRecent=-1;
int qsize=0;
queueType* qback = NULL;

int queueSize(queueType* s) {
	queueType* p = s;
	int cnt = 0;
	while (p != NULL) {
		p = p->next;
		cnt++;
	}
	return cnt;
}

int isEmpty(queueType* s) {
	return (s == NULL);
}

queueType* enqueue(queueType *s, int item) {
	queueType* p = s;
	//if (!isEmpty(s)) {
	//	while (p->next != NULL)
	//		p = p->next;
	//}
	queueType* newNode = (queueType*)malloc(sizeof(queueType));
	newNode->data = item;
	newNode->next = NULL;
	if (isEmpty(s))
		s = newNode;
	else
		qback->next = newNode;
		//p->next = newNode;
	qback = newNode;
	qRecent = item;
	qsize++;
	return s;
}

queueType* dequeue(queueType* s, element* data) {
	if (isEmpty(s)) {
		*data = -1;
		return NULL;
	}
	*data = s->data;
	queueType* p = s;
	s = s->next;
	free(p);
	qsize--;
	return s;
}

element queueFront(queueType* s) {
	if (isEmpty(s)) return -1;
	else return s->data;
}

element queueBack(queueType* s) {
	if (isEmpty(s)) return -1;
	queueType* p = s;
	while (p->next != NULL)
		p = p->next;
	return p->data;
}

int main() {
	int n, item;
	queueType *q = NULL;
	char* cmd = (char*)malloc(sizeof(char)*6);
	scanf("%d", &n);
	for (int m = 0; m < n; m++) {
		scanf("%s", cmd, 6);
		if (strcmp(cmd, "push") == 0) {
			scanf("%d", &item);
			q = enqueue(q, item);
		}
		else if (strcmp(cmd, "pop") == 0) {
			q = dequeue(q, &item);
			printf("%d\n", item);
		}
		else if (strcmp(cmd, "size") == 0) {
			//printf("%d\n", queueSize(q));
			printf("%d\n", qsize);
		}
		else if (strcmp(cmd, "empty") == 0) {
			printf("%d\n", isEmpty(q));
		}
		else if (strcmp(cmd, "front") == 0) {
			printf("%d\n", queueFront(q));
		}
		else if (strcmp(cmd, "back") == 0) {
			if (isEmpty(q))printf("%d\n", -1);
			else printf("%d\n", qRecent);
			//printf("%d\n", queueBack(q));
		}
	}
	
	return 0;
}
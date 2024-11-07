#include <stdio.h>
#include <string.h>
void add1(int* arr, int x) {
	if (arr[x - 1] == 0) arr[x - 1]++;
}
void remove1(int* arr, int x) {
	if (arr[x - 1] == 1) arr[x - 1]--;
}
int check1(int* arr, int x) {
	if (arr[x - 1] == 1) return 1;
	else return 0;
}
void toggle1(int* arr, int x) {
	if (arr[x - 1] == 0) arr[x - 1]++;
	else if (arr[x - 1] == 1) arr[x - 1]--;
}
void all1(int* arr) {
	for (int i = 0; i < 20; i++) {
		arr[i] = 1;
	}
}
void empty1(int* arr) {
	memset(arr, 0, sizeof(int) * 20);
}
int main() {
	int n, x;
	int arr[20] = { 0, };
	char fTxt[7];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", fTxt);
		if (strcmp(fTxt, "add") == 0) {
			scanf("%d", &x);
			add1(arr, x);
		}
		else if (strcmp(fTxt, "remove") == 0) {
			scanf("%d", &x);
			remove1(arr, x);
		}
		else if (strcmp(fTxt, "check") == 0) {
			scanf("%d", &x);
			printf("%d\n", check1(arr, x));
		}
		else if (strcmp(fTxt, "toggle") == 0) {
			scanf("%d", &x);
			toggle1(arr, x);
		}
		else if (strcmp(fTxt, "all") == 0) {
			all1(arr);
		}
		else if (strcmp(fTxt, "empty") == 0) {
			empty1(arr);
		}
	}
	return 0;
}
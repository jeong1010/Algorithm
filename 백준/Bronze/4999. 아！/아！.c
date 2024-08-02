#include <stdio.h>
#include <string.h>
int howA(char a[]) {
	int cntA = 0;
	if (strlen(a) == 0) return -1;
	for (int i = 0; a[i] == 'a'; i++) {
		cntA++;
	}
	return cntA;
}

int main() {
	char jae[1001];
	char doct[1001];
	scanf("%s", jae);
	scanf("%s", doct);
	if (howA(jae) >= howA(doct)) printf("go");
	else printf("no");

	return 0;
}
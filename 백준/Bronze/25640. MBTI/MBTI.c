#include <stdio.h>
#include <string.h>
int main() {
	char myMBTI[5], newMBTI[5];
	int n, cnt=0;
	scanf("%s", myMBTI);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &newMBTI);
		if (strcmp(myMBTI, newMBTI) == 0)
			cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
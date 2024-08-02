#include <stdio.h>
#include <string.h>
int main() {
	char minName[16];
	char maxName[16];
	int maxD=0, maxM=0, maxY=1989;
	int minD=32, minM=13, minY=2011;
	char inputName[16];
	int inputD, inputM, inputY;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d %d %d", inputName, &inputD, &inputM, &inputY);
		if (inputY > maxY) {
			maxY = inputY;
			maxM = inputM;
			maxD = inputD;
			strcpy(maxName, inputName);
		}
		else if (inputY == maxY) {
			if (inputM > maxM) {
				maxY = inputY;
				maxM = inputM;
				maxD = inputD;
				strcpy(maxName, inputName);
			}
			else if (inputM == maxM) {
				if (inputD > maxD) {
					maxY = inputY;
					maxM = inputM;
					maxD = inputD;
					strcpy(maxName, inputName);
				}
			}
		}

		if (inputY < minY) {
			minY = inputY;
			minM = inputM;
			minD = inputD;
			strcpy(minName, inputName);
		}
		else if (inputY == minY) {
			if (inputM < minM) {
				minY = inputY;
				minM = inputM;
				minD = inputD;
				strcpy(minName, inputName);
			}
			else if (inputM == minM) {
				if (inputD < minD) {
					minY = inputY;
					minM = inputM;
					minD = inputD;
					strcpy(minName, inputName);
				}
			}
		}
	}
	printf("%s\n%s\n", maxName, minName);
	return 0;
}
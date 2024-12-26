#include <stdio.h>
int main() {
	int time[3][2][3];
	int res[3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			for(int k=0;k<3;k++)
				scanf("%d", &time[i][j][k]);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (time[i][0][2-j] > time[i][1][2-j]) {
				time[i][1][1-j]--, time[i][1][2-j] += 60;
			}
			res[2-j] = time[i][1][2-j] - time[i][0][2-j];
		}
		res[0] = time[i][1][0] - time[i][0][0];
		printf("%d %d %d\n", res[0], res[1], res[2]);
	}
	return 0;
}
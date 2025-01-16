#include <stdio.h>
#define HUMAN_CNT 5
#define JUDGE_CNT 4
int main() {
	int arr[HUMAN_CNT][JUDGE_CNT];
	int score[HUMAN_CNT] = { 0, };
	int max = 0, maxIndex = -1;

	for (int i = 0; i < HUMAN_CNT; i++) {
		for (int j = 0; j < JUDGE_CNT; j++) {
			scanf("%d", &arr[i][j]);
			score[i] += arr[i][j];
		}
	}
	for (int i = 0; i < HUMAN_CNT; i++) {
		if (score[i] > max) {
			max = score[i];
			maxIndex = i;
		}
	}
	printf("%d %d\n", maxIndex + 1, max);
	return 0;
}
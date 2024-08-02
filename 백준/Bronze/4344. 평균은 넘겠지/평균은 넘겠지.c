#include <stdio.h>
int main() {
	int score[1000];
	int sum = 0;
	int ave;
	double rat;
	int how = 0;
	int c;
	int n;
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		ave = sum / n;
		for (int j = 0; j < n; j++) {
			if (score[j] > ave) how++;
		}
		rat = (double)how / n * 100;
		printf("%.3lf%%\n", rat);
		sum = 0;
		how = 0;
	}
	return 0;
}
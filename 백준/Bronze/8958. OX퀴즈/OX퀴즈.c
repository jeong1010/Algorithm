#include <stdio.h>
int main() {
	char ox[81];
	int i = 0, num=0, sum=0, n;
	scanf("%d", &n);
	for (int k = 0; k < n; k++) {
		scanf("%s", &ox);
		while (ox[i] != '\0') {
			if (ox[i] == 'O') {
				num++;
				sum += num;
			}
			else if (ox[i] == 'X')
				num = 0;
			i++;
		}
		printf("%d\n", sum);
		sum = 0;
		num = 0;
		i = 0;
	}
	return 0;
}
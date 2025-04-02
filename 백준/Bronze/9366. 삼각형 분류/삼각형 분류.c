#include <stdio.h>
int main() {
	int cnt, t, valid;
	int arr[3];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		cnt = 0;
		valid = 1;
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[j]);
			for (int k = j-1; k >= 0; k--) {
				if (arr[k] == arr[j])cnt++;
			}
		}
		printf("Case #%d: ", i + 1);

		for (int j = 0; j < 3; j++) {
			// 0,1,2 / 1,2,0 / 2,0,1
			if (arr[j] >= arr[(j + 1) % 3] + arr[(j + 2) % 3]) 
			{
				printf("invalid!\n");
				valid = 0;
				break;
			}
		}

		if(valid)
		{
			if (cnt >= 2)printf("equilateral\n");
			else if (cnt == 1)printf("isosceles\n");
			else printf("scalene\n");
		}
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int t, n, m;
	int x=0, y=0,z=0, cnt=0, tmp;
	int* arr;
	scanf("%d", &t);
	for(int k=0;k<t;k++)
	{
		scanf("%d %d", &n, &m);
		for(int i=0;i<m;i++)
		{
			scanf("%d", &tmp);
			x += tmp * pow(10, m - (i+1));
		}
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &tmp); 
			y += tmp * pow(10, m - (i + 1));
		}
		arr = (int*)malloc(sizeof(int) * n);
		for (int i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		for (int i = 0; i < n; i++) {
			for (int j = 0 + i; j < m + i; j++)
				z += arr[j % n] * pow(10, (m + i)-(j + 1));
			if (x <= z && z <= y)
				cnt++;
			z = 0;
		}
		printf("%d\n", cnt);
		free(arr);
		x = 0, y = 0, z = 0, cnt=0;
	}

	return 0;
}
#include <stdio.h>
#include <stdio.h>
int main() {
	int sum, sub, t1, t2;
	scanf("%d %d", &sum, &sub);
	t1 = (sum + sub) / 2;
	t2 = sum - t1;
	if (t1 + t2 == sum && t1 - t2 == sub && t1 >= 0 && t2 >= 0)
		printf("%d %d\n", t1, t2);
	else printf("%d", -1);
	return 0;
}
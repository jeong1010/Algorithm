#include <stdio.h>
int main() {
	int tmp, s = 0, t = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &tmp);
		s += tmp;
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &tmp); 
		t += tmp;
	}
	if (t > s)
		printf("%d\n", t);
	else printf("%d\n", s);
	return 0;
}
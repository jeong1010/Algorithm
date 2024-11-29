#include <stdio.h>
int main() {
	int sum = 0, s, fm, fs;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &s);
		sum += s;
	}
	fm = sum / 60;
	fs = sum % 60;
	printf("%d\n%d\n", fm, fs);
	return 0;
}
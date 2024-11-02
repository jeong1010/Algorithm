#include <stdio.h>
int main() {
	int n, possible=0;
	char input[31];
	char initial[26] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", input);
		initial[input[0] - 'a']++;
		if (initial[input[0] - 'a'] == 5) possible = 1;
	}
	if (possible == 0)
		printf("PREDAJA\n");
	else {
		for (int i = 0; i < 26; i++) {
			if (initial[i] >= 5)printf("%c", i + 'a');
		}
	}
	return 0;
}
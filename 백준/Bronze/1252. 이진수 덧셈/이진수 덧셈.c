#include <stdio.h>
#include <string.h>
int main() {
	char n1[81];
	char n2[81];
	char result[82];
	int l1, l2, l3, r_up=0, n_up=0, k;
	
	scanf("%s", n1);
	if (strcmp(n1, "0") != 0) {
		for (k = 0; k < strlen(n1); k++) {
			if (n1[k] == '1')break;
		}
		if (k == strlen(n1)) strcpy(n1, "0");
		else strcpy(n1, &n1[k]);
	}
	scanf("%s", n2);
	if (strcmp(n2, "0") != 0) {
		for (k = 0; k < strlen(n2); k++) {
			if (n2[k] == '1')break;
		}
		if (k == strlen(n2)) strcpy(n2, "0");
		else strcpy(n2, &n2[k]);
	}
	l1 = strlen(n1), l2 = strlen(n2);
	l3 = l1 > l2 ? l1 : l2;
	l1--, l2--;
	
	result[l3 + 1] = '\0';
	while (l1 >= 0 && l2 >= 0) {
		r_up = n_up, n_up = 0;
		if (n1[l1] == n2[l2]) 
		{
			result[l3] = '0';
			if (n1[l1] == '1')
				n_up = 1;
		}
		else result[l3] = '1';

		if (r_up == 1) {
			// printf("n1:%c n2:%c | ", n1[l1], n2[l2]);
			result[l3] = result[l3] == '0' ? '1' : '0';
			if (n1[l1] == '0' && n2[l2] == '0') n_up = 0;
			else n_up = 1;
		}
		l1--, l2--, l3--;
	}

	for (int i = l1; i >= 0; i--) {
		r_up = n_up, n_up = 0;
		result[l3] = n1[i];
		if (r_up == 1) {
			result[l3] = result[l3] == '0' ? '1' : '0';
			if (n1[i] == '1')n_up = 1;
		}
		l3--;
	}
	for (int i = l2; i >= 0; i--) {
		r_up = n_up, n_up = 0;
		result[l3] = n2[i];
		if (r_up == 1) {
			result[l3] = result[l3] == '0' ? '1' : '0';
			if (n2[i] == '1')n_up = 1;
		}
		l3--;
	}

	if (n_up == 1) result[0] = '1';
	else result[0] = '0';

	if (result[0] == '0')
		printf("%s\n", &result[1]);
	else printf("%s\n", result);
	return 0;
}
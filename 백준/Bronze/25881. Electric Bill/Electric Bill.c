#include <stdio.h>
int main() {
	int first, rate, n, customer, total;
	scanf("%d %d", &first, &rate);
	scanf(" %d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %d", &customer);
		if(customer <= 1000)
			total = customer * first;
		else 
			total = 1000 * first + (customer - 1000)* rate;

		printf("%d %d\n", customer, total);
	}
	return 0;
}
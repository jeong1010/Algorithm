#include <stdio.h>
int main(){
	char str[] = "WelcomeToSMUPC";
	int n;
	scanf("%d", &n);
	printf("%c\n", str[(n - 1) % 14]);
}
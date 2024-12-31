#include <stdio.h>
int main() {
	int antena, eyes;
	scanf("%d", &antena);
	scanf("%d", &eyes);
	if (antena >= 3 && eyes <= 4)
		printf("TroyMartian\n");
	if (antena <= 6 && eyes >= 2)
		printf("VladSaturnian\n");
	if (antena <= 2 && eyes <= 3)
		printf("GraemeMercurian\n");
	return 0;
}
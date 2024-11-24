#include <stdio.h>
int main(){
	short cute = 0, notCute = 0;
	short input, n;
	scanf("%hd", &n);
	for (short i = 0; i < n; i++) {
		scanf("%hd", &input);
		if (input == 1)cute++;
		else if (input == 0)notCute++;
	}
	if (cute > notCute)printf("Junhee is cute!\n");
	else printf("Junhee is not cute!\n");
    return 0;
}
#include <stdio.h>
int main(){
	int t;
	int n1, n2;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
		scanf("%d %d", &n1, &n2);
		printf("Case %d: %d\n", i+1, n1+n2);
	}
	return 0;
}
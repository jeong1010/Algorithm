#include <stdio.h>
int main(){
    int a,b, sum, i;
    scanf("%d", &a);
    scanf("%d", &b);
    sum = a+b;
    for(i=1;sum/10>0;i++){
        sum /= 10;
    }
    printf("%d\n", i);
    return 0;
}
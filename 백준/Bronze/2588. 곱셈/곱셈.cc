#include <stdio.h>
int main(){
    int a,b1,b2,b3;
    scanf("%d %1d%1d%1d", &a, &b1, &b2, &b3);
    printf("%d\n", a*b3);
    printf("%d\n", a*b2);
    printf("%d\n", a*b1);
    printf("%d", a*(100*b1+10*b2+b3));
    return 0;
}
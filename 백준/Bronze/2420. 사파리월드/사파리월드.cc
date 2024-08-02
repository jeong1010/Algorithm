#include <stdio.h>
int main(){
    long int n,m,sub;
    scanf("%ld %ld", &n, &m);
    sub = n - m;
    if(sub < 0)
        sub = sub * -1;
    printf("%ld", sub);
    return 0;
}
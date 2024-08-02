#include <stdio.h>
long int fac(int i){
    if(i==0)
        return 1;
    else return fac(i-1) * i;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%ld", fac(n));
    return 0;
}
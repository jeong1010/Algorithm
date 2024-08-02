#include <stdio.h>
int main(){
    int a,b,e;
    while(1){
        e = scanf("%d %d", &a, &b);
        if(e == EOF)
            break;
        printf("%d\n", (a+b));
    }
    return 0;
}
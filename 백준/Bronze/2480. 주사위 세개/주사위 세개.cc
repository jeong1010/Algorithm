#include <stdio.h>
int main(){
    int n1, n2, n3, w;
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 == n2 && n2 == n3)
        w = 10000 + n1 * 1000;
    else if(n1 == n2 || n1 == n3)
        w = 1000 + n1 * 100;
    else if(n2 == n3)
        w = 1000 + n2 * 100;
    else{
        if(n1 > n2){
            if(n1 > n3)
                w = 100 * n1;
            else
                w = 100 * n3;
        }
        else{
            if(n2 > n3)
                w = 100 * n2;
            else
                w = 100 * n3;
        }
    }
    printf("%d", w);
    return 0;
}
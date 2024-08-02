#include <stdio.h>
int main(){
    int h,m;
    scanf("%d %d", &h, &m);
    m -= 45;
    if(m < 0){
        if(h - 1 < 0)
            h = 23;
        else
            h--;
        m += 60;
    }
    printf("%d %d", h, m);
    return 0;
}
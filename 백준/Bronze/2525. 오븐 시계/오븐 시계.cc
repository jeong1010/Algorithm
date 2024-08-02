#include <stdio.h>
int main(){
    int h, m, a;
    scanf("%d %d", &h, &m);
    scanf("%d", &a);
    m = m + a;
    while(m >= 60){
        m -= 60;
        if(h + 1 > 23)
            h = 0;
        else 
            h++;
    }
    printf("%d %d", h, m);
    return 0;
}
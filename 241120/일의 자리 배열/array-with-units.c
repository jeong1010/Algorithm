#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d %d", &a, &b);
    for(int i=0;i<10;i++){
        if(i == 0)printf("%d ", a);
        else if(i == 1)printf("%d ", b);
        else{
            c = (a + b) % 10;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
    return 0;
}
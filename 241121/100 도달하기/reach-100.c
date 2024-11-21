#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d", &b);
    a = 1;
    printf("%d %d ", a, b);
    while(c < 100){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
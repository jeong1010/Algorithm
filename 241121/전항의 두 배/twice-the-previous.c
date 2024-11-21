#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d %d", &a, &b);
    printf("%d %d ", a, b);
    for(int i=0;i<8;i++){
        c = b + 2*a;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
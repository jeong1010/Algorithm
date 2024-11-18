#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int c[10];
    for(int i=0;i<10;i++)
        scanf("%c ", &c[i]);
    printf("%c %c %c\n", c[1], c[4], c[7]);
    return 0;
}
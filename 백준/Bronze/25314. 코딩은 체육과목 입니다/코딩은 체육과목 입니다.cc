#include <stdio.h>
int main(){
    int b;
    scanf("%d", &b);
    while(b != 0){
        printf("long ");
        b -= 4;
    }
    printf("int");
    return 0;
}
#include <stdio.h>
int main(){
    int i=0;
    char s[100];
    scanf("%s", &s);
    while(s[i] != '\0'){
        i++;
    }
    printf("%d", i);
    return 0;
}
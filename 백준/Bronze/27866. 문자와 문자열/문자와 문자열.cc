#include <stdio.h>
int main(){
    int n;
    char s[1000];
    scanf("%s", &s);
    scanf("%d", &n);
    printf("%c", s[n-1]);
    return 0;
}
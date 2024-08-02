#include <stdio.h>
#define MAX_TEXT 100
int whereChar(char s[], char c){
    int i = 0;
    while(s[i] != '\0'){
        if(s[i] == c) return i;
        i++;
    }
    return -1;
}
int main(){
    char s[MAX_TEXT];
    char c = 'a';
    int w;
    scanf("%s", &s);
    for(;c<='z';c++){
        w = whereChar(s,c);
        printf("%d ", w);
    }
    return 0;
}
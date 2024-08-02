#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1000
int main() {
    int t, i, j = 0;
    char s[MAX_SIZE];
    char first, last;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%s", &s);
        first = s[0];
        j = strlen(s);
        j = j - 1;
        last = s[j];
        printf("%c%c\n", first, last);
    }
    return 0;
}
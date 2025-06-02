#include <stdio.h>
int main()
{
    int n;
    char str[101];
    char before;
    scanf("%d", &n);
    for(int j = 0;j<n;j++)
    {
        before = ' ';
        scanf(" %s", str);
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (i == 0 || before != str[i]) {
                printf("%c", str[i]);
                before = str[i];
            }
        }
        printf("\n");
    }
    return 0;
}

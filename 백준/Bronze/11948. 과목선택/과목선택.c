#include <stdio.h>
int main()
{
    int score[6], sum = 0, min = 101;
    int i;
    for (i = 0; i < 6; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
        if (min > score[i]) min = score[i];
        if (i == 3 || i == 5) {
            sum -= min;
            min = 101;
        }
    }
    printf("%d\n", sum);
    return 0;
}

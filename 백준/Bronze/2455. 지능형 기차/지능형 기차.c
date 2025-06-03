#include <stdio.h>
int main()
{
    int max = 0, on, off, sum = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &off, &on);
        sum -= off;
        sum += on;
        if (sum > max)max = sum;
    }
    printf("%d\n", max);
    return 0;
}

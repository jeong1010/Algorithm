#include <stdio.h>

int main() {
    int k, m, n;
    scanf("%d %d %d", &k, &n, &m);
    printf("%d", k*n<=m?0:k*n-m);
    return 0;
}
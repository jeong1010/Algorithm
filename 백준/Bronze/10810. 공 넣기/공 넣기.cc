#include <stdio.h>
int main(){
    int n,m,i,j,k, l;
    int arr[100] = {0, };
    scanf("%d %d", &m, &n);
    for(l=0;l<n;l++){
        scanf("%d %d %d", &i, &j, &k);
        for(;i<=j;i++)
            arr[i] = k;
    }
    for(l=1;l<=m;l++){
        printf("%d ", arr[l]);
    }
    return 0;
}
#include <stdio.h>
int main(){
    int i,j, temp,n,m;
    int arr[100];
    scanf("%d %d", &m, &n);
    for(i=1;i<=m;i++)
        arr[i] = i;
    while(n){
        scanf("%d %d", &i, &j);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        n--;
    }
    for(i=1;i<=m;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
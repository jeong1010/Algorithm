#define MAX_SIZE 10000
#include <stdio.h>
int main(){
    int n,x,i;
    int arr[MAX_SIZE];
    scanf("%d", &n);
    scanf("%d", &x);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i] < x)
            printf("%d ", arr[i]);
    }
    return 0;
}
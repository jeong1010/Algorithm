#define MAX_SIZE 100
#include <stdio.h>
int main(){
    int arr[MAX_SIZE];
    int n,v,i,cnt=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    for(i=0;i<n;i++){
        if(arr[i] == v)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}
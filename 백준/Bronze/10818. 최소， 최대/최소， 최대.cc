#define MAX_SIZE 1000000
#include <stdio.h>
int main(){
    int arr[MAX_SIZE];
    int n, x, max=-1000001, min = 1000001;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d %d", min, max);
    
    return 0;
}
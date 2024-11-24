#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int min = INT_MAX, cnt=0;
    int *arr;
    int n;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i] < min) {
            min = arr[i];
            cnt = 1;
        }
        else if(arr[i] == min) cnt++;
        
    }
    printf("%d %d\n", min, cnt);
    return 0;
}
// 값
// 몇 번째
#include <stdio.h>
int main(){
    int arr[9];
    int i,max=-1, maxIndex=-1;
    for(i=0;i<9;i++){
        scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }
    }
    printf("%d\n%d", max, (maxIndex+1));
    return 0;
}
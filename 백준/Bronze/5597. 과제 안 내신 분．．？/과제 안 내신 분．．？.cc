#include <stdio.h>
int main(){
    int n=28, max=0, min=31,i,num;
    int arr[30];
    for(i=0;i<30;i++){
        arr[i] = i+1;
    }
    for(i=0;i<n;i++){
        scanf("%d", &num);
        arr[num-1] = 0;
    }
    for(i=0;i<30;i++){
        if(arr[i] != 0){
            if(arr[i] > max)
                max = arr[i];
            if(arr[i] < min)
                min = arr[i];
        }
    }
    printf("%d\n%d", min, max);
    return 0;
}
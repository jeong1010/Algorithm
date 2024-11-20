#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int cnt = 0;
    for(int i=0;i<100;i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 0)break;
        cnt++;
    }
    for(int i=0;i<cnt;i++){
        if(arr[i] % 2 == 1){
            printf("%d ", arr[i]+3);
        }
        else {
            printf("%d ", arr[i]/2);
        }
    }
    return 0;
}
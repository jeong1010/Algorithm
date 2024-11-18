#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n=0, isZero=0;
    for(int i=0;i<100;i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 0) isZero = 1;
        if(isZero == 0)
            n++;
        if(arr[i] == 0 && i > 3)
            break;
    }
    printf("%d\n", arr[n-3]+arr[n-2]+arr[n-1]);
    return 0;
}
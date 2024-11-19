#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int n=0, isThree=0;
    for(int i=0;i<10;i++){
            scanf("%d", &arr[i]);
            if(isThree == 0 && arr[i] % 3 != 0)
                n++;
            if(arr[i] % 3 == 0)
                isThree = 1;
    }
    printf("%d\n", arr[n-1]);
    return 0;
}
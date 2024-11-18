#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sumOdd = 0, sumEven = 0;
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
        if((i+1) % 2 == 1)
            sumOdd += arr[i];
        else
            sumEven += arr[i];
    }
    if(sumOdd > sumEven)
        printf("%d\n", sumOdd - sumEven);
    else
        printf("%d\n", sumEven - sumOdd);
    return 0;
}
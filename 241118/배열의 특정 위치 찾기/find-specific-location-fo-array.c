#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum=0, cnt=0;
    float ave = 0;
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<10;i+=2){
        sum += arr[i];
    }
    for(int i=2;i<10;i+=3){
        ave += arr[i];
        cnt++;
    }
    ave /= cnt;
    printf("%d %.1f\n", sum, ave);
    return 0;
}
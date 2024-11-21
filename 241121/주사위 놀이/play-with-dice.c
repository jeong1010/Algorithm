#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int cnt[6] = {0, };
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
        cnt[arr[i]-1]++;
    }
    for(int i=0;i<6;i++){
        printf("%d - %d\n", i+1, cnt[i]);
    }

    return 0;
}
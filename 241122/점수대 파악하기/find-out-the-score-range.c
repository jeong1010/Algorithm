#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int cnt[10] = {0, };
    int i=0;
    while(1){
        scanf("%d", &arr[i]);
        if(arr[i] == 0)break;
        i++;
    }
    for(int j=0;j<i;j++){
        if(arr[j] >= 10)
            cnt[arr[j]/10-1]++;
    }
    for(int k=9;k>=0;k--){
        printf("%d - %d\n", (k+1)*10, cnt[k]);
    }
    return 0;
}
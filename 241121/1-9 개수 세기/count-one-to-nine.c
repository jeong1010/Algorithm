#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr;
    int n, cnt;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<10;i++){
        cnt = 0;
        for(int j=0;j<n;j++){
            if(arr[j] == i) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
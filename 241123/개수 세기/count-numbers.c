#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr;
    int n, m, cnt=0;
    scanf("%d %d", &n, &m);
    arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i] == m) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
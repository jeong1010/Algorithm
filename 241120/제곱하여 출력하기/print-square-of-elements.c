#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr;
    int n;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        arr[i] = arr[i] * arr[i];
    }

    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
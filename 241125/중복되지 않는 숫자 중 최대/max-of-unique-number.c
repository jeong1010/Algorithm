#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, input;
    int arr[1000] = {0, };
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &input);
        arr[input-1]++;
    }
    for(int i=999;i>=0;i--)
    {
        if(arr[i] == 1){
        printf("%d\n", arr[i]+1);
        break;
        }
        else if(i == 0){
            printf("-1\n");
        }
    }
    return 0;
}
#include <stdio.h>
void prn(char *arr, int i){
    printf("%c", arr[i]);
    if(i == 0){
        return;
    }
    prn(arr, i-1);
}
int main() {
    // 여기에 코드를 작성해주세요.
    char arr[10];
    for(int i=0;i<10;i++)
        scanf(" %c", &arr[i]);
    prn(arr, 9);
    return 0;
}
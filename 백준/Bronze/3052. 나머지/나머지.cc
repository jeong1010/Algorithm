// 첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
#include <stdio.h>
int isExist(int arr[10], int index, int n){
    int e = 0;
    for(int i=0;i<index;i++){
        if(arr[i] == n){
            e = 1;
            break;
        }
    }
    return e;
}
int main(){
    int l=42, num, index=0,i;
    int arr[10];
    for(i=0;i<10;i++){
        scanf("%d", &num);
        num = num % 42;
        if(isExist(arr, index, num) == 0){
            arr[index++] = num;
        }
    }
    printf("%d", index);
    return 0;
}
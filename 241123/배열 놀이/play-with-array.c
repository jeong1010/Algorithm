#include <stdio.h>
#include <stdlib.h>
int where1(int arr[], int n, int b){
    for(int i=0;i<n;i++){
        if(arr[i] == b) return i;
    }
    return 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int* arr;
    int func;
    int n1, n2, n, q;
    scanf("%d %d", &n, &q);
    arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<q;i++){
        scanf("%d", &func);
        switch(func){
            case 1:
                scanf("%d", &n1);
                printf("%d\n", arr[n1-1]);
                break;
            case 2:
                scanf("%d", &n1);
                printf("%d\n", where1(arr, n, n1)+1);
                break;
            case 3:
                scanf("%d %d", &n1, &n2);
                for(int k=n1-1;k<=n2-1;k++){
                    printf("%d ", arr[k]);
                }
                printf("\n");
                break;
        }
    }
    return 0;
}
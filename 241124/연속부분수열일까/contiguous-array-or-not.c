#include <stdio.h>
#include <stdlib.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int *a, *b;
    int n1, n2;
    int isEnd = 0, y=0;
    scanf("%d %d", &n1, &n2);
    a = (int*)malloc(sizeof(int)*n1);
    b = (int*)malloc(sizeof(int)*n2);
    for(int i=0;i<n1;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n2;i++){
        scanf("%d", &b[i]);
    }
    for(int i=0;i<n1;i++){
        y = 0;
        for(int j=0;j<n2;j++){
            if(a[i+j] == b[j]){
                y += 1;
            }
        }
        if(y == n2) 
        {
            printf("Yes\n");
            isEnd = 1;
            break;
        }
    }
    if(isEnd == 0) printf("No\n");
    
    free(a);
    free(b);

    return 0;
}
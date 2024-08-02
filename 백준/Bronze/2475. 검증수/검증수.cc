#include <stdio.h>
int main(){
    int num[5];
    int sum = 0;
    int ans;
    for(int i=0;i<5;i++){
        scanf("%d", &num[i]);
        sum += num[i] * num[i];
    }
    ans = sum % 10;
    printf("%d\n", ans);
    return 0;
}
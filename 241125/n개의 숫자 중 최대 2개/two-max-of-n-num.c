#include <stdio.h>
#include <limits.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int n, n1=INT_MIN, n2=INT_MIN;
    int input;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &input);
        if(input > n1) 
        {
            n2 = n1;
            n1 = input;
        }
        else if(input > n2){
            n2 = input;
        }
    }
    printf("%d %d\n", n1, n2);
    return 0;
}
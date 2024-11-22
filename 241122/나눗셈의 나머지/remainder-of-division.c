#include <stdio.h>
#include <math.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum=0;
    int cnt[10] = {0, };
    scanf("%d %d", &a, &b);
    while(a > 1){
        cnt[a%b]++;
        a /= b;
    }
    for(int i=0;i<10;i++){
        sum += (int)pow(cnt[i],2);
    }
    printf("%d\n", sum);
    return 0;
}
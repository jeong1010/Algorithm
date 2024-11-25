#include <stdio.h>

int main() {
    int max = -999, min = 999;
    int input;
    while(1){
        scanf("%d", &input);
        if(input == 999 || input == -999)break;
        if(input > max)max = input;
        if(input < min)min = input;
    }
    printf("%d %d\n", max, min);
    // 여기에 코드를 작성해주세요.
    return 0;
}
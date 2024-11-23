#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char input;
    int idx = -1;
    
    scanf("%c", &input);

    for(int i=0;i<6;i++){
        if(c[i] == input)
            idx = i;
    }

    if(idx == -1)
        printf("None\n");
    else printf("%d\n", idx);

    return 0;
}
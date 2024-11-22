#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char sy[3];
    int tem[3];
    int Acnt=0, Bcnt=0, Ccnt=0, Dcnt=0;
    for(int i=0;i<3;i++){
        scanf(" %c", &sy[i]);
        scanf(" %d", &tem[i]);
    }
    for(int i=0;i<3;i++){
        if(sy[i] == 'Y'){
            if(tem[i] >= 37){Acnt++;}
            else {Ccnt++;}
        }
        else{
            if(tem[i] >= 37){ Bcnt++;}
            else {Dcnt++;}
        }
    }
    printf("%d %d %d %d ", Acnt, Bcnt, Ccnt, Dcnt);
    if(Acnt >= 2) printf("E");
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char input[10];
    scanf("%s", input);
    if(strcmp(input, "SONGDO") == 0){
        printf("HIGHSCHOOL\n");
    }
    else if(strcmp(input, "CODE") == 0){
        printf("MASTER\n");
    }
    else if(strcmp(input, "2023") == 0){
        printf("0611\n");
    }
    else if(strcmp(input, "ALGORITHM") == 0){
        printf("CONTEST\n");
    }
    return 0;
}
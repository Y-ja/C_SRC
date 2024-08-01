#include <stdio.h>
// 2차원 배열 세로읽기
int main(void) 
{
    char string[5][15] = {0,};

    for (int i = 0; i < 5; i++) {
        scanf("%s",string[i]);
    } 

    for (int j = 0; j < 15; j++) {
        for (int k = 0; k < 5; k++){
            if (string[k][j] != '\0'){
                printf("%c",string[k][j]);
            }
        }
    }

    return 0;
}
#include <stdio.h>
int main(void){
    int i , k;
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 5; k++)
        {
            printf("☆");
        }
        printf("\n");
        // 최종 i , k 값 출력
        
    }
    printf("i -> %d  , k -> %d\n" , i , k) ;
    return 0;
}
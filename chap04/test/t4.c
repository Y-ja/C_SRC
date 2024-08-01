#include <stdio.h>
int main(void){
    int i = 0 , k = 0 , l; 
    printf("줄 입력 -> ");
    scanf("%d" , &l);

    for (int i = 0; i < l; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}
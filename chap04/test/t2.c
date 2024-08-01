#include <stdio.h>
int main(void){
    int  i , k;
    int size = 0;
    printf("입력 -> ");
    scanf("%d" , &size);

    for (int i = 1; i < size; i++)
    {
        for (int k = 0; k < size; k++)
        {
            if ((i == k ) || (i + k == size +1))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0 ;
}
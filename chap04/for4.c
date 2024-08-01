#include <stdio.h>
int main(void){
    int i , k;
    int num = 1;

    for (int i = 0; i < 5; i++){
        for (int k = 0; k < 5; k++)
        {
            printf(" %d" , num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
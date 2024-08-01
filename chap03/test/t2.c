#include <stdio.h>
int main(void){
    int a = 10;
    if ((a % 2) == 0)
    {   
        a = 2;
        printf("True 입니다 -> %d" , a);
    }
    else{
         a = 1;
        printf("False 입니다 -> %d" , a);
    }

    
}
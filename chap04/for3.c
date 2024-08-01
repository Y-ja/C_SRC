#include <stdio.h>
int main(void){
    for (int i = 1; i < 10; i++)
    { //9번 반복
       for (int k = 2; k <= 10; k++)
       {
        //8번 반복
         printf("%3d * %d = %2d",k,i,(i*k));
       }
       printf("\n");
       
    }
    return 0;
}
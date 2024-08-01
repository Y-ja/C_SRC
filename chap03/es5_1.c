#include <stdio.h>
int main(void){
    int a = 10;
    int b = 20;

    if(a>10){
         b = a;
         a = 100;
    }
     else{
        a = b;
     }  
    printf("a -> %d , b-> %d " , a,b );
    return 0;
}
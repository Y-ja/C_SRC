#include <stdio.h>
int main(void){
    int a = 1;
    int i = 0;
    // for (i = 0; i < 11; i++)
    // {
    //     a = a + i;
    //     // i = i + 2;
    // }

    while (i<11)
    {
        a = a + i;
        i++;
    }
    printf("a -> %d\n" , a);
    printf("i -> %d\n" , i);
    
    return 0;
    
}
#include <stdio.h>
int main(void){
    int i ; 
    int sum = 0;
    for (int i = 1; i < 101; i++)
    {
        if (( i % 3) != 0)
        {
            continue;
        }
        sum += i;
    }
    printf("%d" , sum);
    
}
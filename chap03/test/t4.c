#include <stdio.h>
int main(void){
    double height = 179.5;
    double weight = 75.0;
    if (height >= 187.5 && weight < 80)
    {
        printf("OK!\n");
    }
    else{
        printf("CANCEL!\n");
    }
    return 0;
}
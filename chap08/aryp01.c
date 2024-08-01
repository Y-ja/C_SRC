#include <stdio.h>
int main() {
    int ary[3] = { 10, 20 ,30};
    int *pa;
    int i;
   
    pa = ary;
    printf("%d \n" , *(pa));
    printf("배열의 값 -> ");
    for (i = 0; i < 3; i++)
    {  
        printf("%d " , *pa);
        pa++;
    }
    return 0;
}
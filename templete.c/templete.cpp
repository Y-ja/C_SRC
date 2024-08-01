#include "stdio.h"
 
int main()
{
    int n;
    int count = 0;
    printf("\n정수입력: ");
    scanf("%d", &n);
    while(n != 0)
    {
        n = n/10;
        ++count;
    }
    printf("\n자릿수: %d\n", count);
    
    return 0;
}
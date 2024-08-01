#include <stdio.h>

void swap_ptr(char **pa, char **pd);

int main(void) {
   
    char *pa = "success";
    char *pd = "failure"; 
    
    printf("pa -> %s , pd -> %s \n", pa, pd);
    swap_ptr(&pa, &pd);

    printf("pa -> %s , pd -> %s \n", pa, pd);
    printf("pa -> %12u , %12u \n", pa, &pa);
    return 0;
}

void swap_ptr(char **pa, char **pd) {
    char *pt;
    pt = *pa; 
    *pa = *pd;  
    *pd = pt; 
}
#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[80] = "wolf";
    char str2[80] = "";

    // for (int i = 0; i < (sizeof(str1) / sizeof(str1[0])); i++) { 
    //     str2[i] = str1[i]; 
    //     printf("%c", str2[i]); 
    // }

    strcpy(str1 , "white_wolf");
    strcpy(str2 , str1);
    printf("%s %s \n" , str1 , str2);

    printf("\n"); 

    return 0;
}
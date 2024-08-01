#include<stdio.h>

int main(){

   int i = 0, k = 0;   

   for(i = 2; i <= 100; i++){
      for(k = 2; k < i; k++){  
         if(i % k == 0)        
            break;             
      }
      if(i == k)               
         printf("%4d", i);     
   }

   printf("\n");

   return 0;
}
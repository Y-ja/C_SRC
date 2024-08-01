#include <stdio.h>
// 소인소분해
int main(void){
    int n;
    scanf("%d", &n);
    while(n>1){
        for(int i=2; i<=n; i++){

            if(n%i==0){

                printf("%d", i);

                n = n/i;

                break; 

            }
        }
    }
    return 0;
}
#include <stdio.h>
int main(void){
    int A, B;
    int i;

    printf("Enter two integers (A and B): ");
    scanf("%d %d", &A, &B);

    
    for (i = 0; i < 1; i++) { 
        if (A > B) {
            printf("A 는 B보다 큽니다.\n");
        } else if (A < B) {
            printf("A 는 B보다 작습니다.\n");
        } else {
            printf("A 는 B 하고 비슷합니다.\n");
        }
    }

    return 0;
}
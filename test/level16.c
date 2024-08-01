#include <stdio.h>
// 직사각형 넓이 구하기
int main(void) 
{
    int A,B;

    scanf("%d", &A);

    if (A > 0 && A < 101) {
        scanf("%d", &B);
        if (B > 0 && B < 101) {
            printf("%d", A*B);
        }
    }

    return 0;
}
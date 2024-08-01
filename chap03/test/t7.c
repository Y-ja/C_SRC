#include <stdio.h>
int main(void){
    int a , b, res;
    char cir;
    printf("사칙연산 입력 정수 ->  ");
    scanf("%d %c %d" , &a , &cir , &b);
    switch (cir)
    {
    case '+':
        res = a + b;
        printf("%d %c %d = %d\n" , a , cir , b , res);
        break;
    case '-':
        res = a - b;
        printf("%d %c %d = %d\n" , a , cir , b , res);
        break;
    case '*':
        res = a * b;
        printf("%d %c %d = %d\n" , a , cir , b , res);
        break;
    case '/':
        res = a / b;
        printf("%d %c %d = %d\n" , a , cir , b , res);
        break;
    default:
        res = 0;
        break;
    }
    return 0;
}
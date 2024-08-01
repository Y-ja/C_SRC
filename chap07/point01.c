#include <stdio.h>
int main(void){
    int a;
    int *pa;
    double b;
    char c;

    pa = &a; // 포인터에 a의 주소 대입
    *pa = 10; // 포인터로 변수 a에 10대입

    // 주소 연산자로 주소 계산
    printf("int형 변수의 주소 -> %u \n" , &a);
    printf("double형 변수의 주소 -> %u \n" , &b);
    printf("char형 변수의 주소 -> %u \n" , &c);

    printf("int형 변수의 주소 -> %p \n" , &a);
    printf("double형 변수의 주소 -> %p \n" , &b);
    printf("char형 변수의 주소 -> %p \n" , &c);
    
    printf("포인터로 a값 출력 -> %d \n" , &pa);
    printf("변수명으로 a값 출력 -> %d \n" , &a);


    
    return 0;
}
#include <stdio.h>

int main(void) {
    int a = 10;

    int *p = &a;
    double d;

    // d = p; // 잘못된 할당 방법

    // 올바른 방법: 포인터를 정수형으로 형변환하여 그 값을 출력
    d = (double)*p;

    // 정수형 변수를 출력할 때는 %d를 사용합니다.
    // *(int*)d는 double 형식을 int 형식으로 강제 형변환하는 방법입니다.
    printf("%d\n", *(int*)&d);

    return 0;
}
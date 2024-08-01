#include <stdio.h>

// 함수 원형 선언
void swap(int *pa, int *pb);

int main(void) {
    int a = 10, b = 20;

    swap(&a, &b);

    printf("a: %d, b: %d\n", a, b);

    return 0;
}

// swap 함수 정의: 두 개의 int 포인터를 매개변수로 받음
void swap(int *pa, int *pb) {
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

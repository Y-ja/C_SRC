#include <stdio.h>

union student
{
    int i;
    short sh;
    char ch;
};

int main(void) {
    union student num;
    num.i = 0x123456;  // 모든 멤버에 대해 동일한 메모리 공간을 공유하므로, `i`에 값을 설정

    // 각 멤버의 값을 출력합니다
    printf("i  -> %12x\n", num.i);  // 16진수로 출력
    printf("sh -> %12x\n", num.sh); // 16진수로 출력
    printf("ch -> %12x\n", num.ch); // 16진수로 출력

    return 0;
}
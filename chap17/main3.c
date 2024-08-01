#include <stdio.h>
#define VER 7
#define BIT16 // -> 프로그래밍에서 사용하는 매크로 정의

int main(void){
    int max;
#if VER >= 6
    printf("버전 %d 입니다 \n" , VER);
#endif

#ifdef BIT16 // -> #ifnef -> 정의가 안되는 경우 
    max = 32767;
#else
   max = 2147483647;     
#endif
    printf("int 형 변수의 최대값 -> %d \n" , max);

    return 0;
}
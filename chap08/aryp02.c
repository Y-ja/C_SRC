#include <stdio.h>

// 함수 원형 선언
void print_ary(int *pa, int cnt); 

int main() {
    int ary[10] = {10, 20, 30, 40, 50, 60 , 70 , 80 , 90 , 100} ;

    // 함수 호출
    print_ary(ary, sizeof(ary) / sizeof(ary[0])); 

    return 0;
}

// 함수 정의
void print_ary(int *pa, int cnt) { 
    printf("배열의 값 -> ");
    for (int i = 0; i < cnt; i++) {
        printf("%d ", pa[i]); 
    }
    printf("\n");
}

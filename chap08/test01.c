#include <stdio.h>

// 함수 선언
void print_ary_index(int *num, int index);

int main() {
    int num[5];
    int i, ch;

    // 배열 초기화
    printf("5개의 정수를 입력하세요:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    while (1) {
        printf("출력할 정수의 번호를 입력하세요 (1부터 5까지, 종료는 0): ");
        scanf("%d", &ch);

        if (ch >= 1 && ch <= 5) {
            print_ary_index(num, ch - 1); // 함수 호출로 대체
        }
        else {
            printf("프로그램을 종료합니다.\n");
            break;
        }
    }

    return 0;
}

// 함수 정의
void print_ary_index(int *num, int index) {
    printf("선택한 정수: %d\n", num[index]);
}

#include <stdio.h>

int main() {
    int num[5];
    int i, ch;

    // 배열 초기화
    printf("5개의 정수를 입력하세요:");
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    // 2
    while (1) {
        printf("출력할 정수의 번호를 입력하세요 (1부터 5까지, 종료는 0)-> ");
        scanf("%d", &ch);

        if ((ch >= 1) && (ch <= 5)) {
            printf("선택한 정수: %d\n", num[ch - 1]);
        }
        else {
            printf("프로그램을 종료합니다.\n");
            break; // 반복문 종료. 
        }
    }

    return 0;
}

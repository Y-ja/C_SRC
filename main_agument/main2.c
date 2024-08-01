#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // 프로그램 실행 시 인자가 3개 이상인 경우 메시지 출력 후 종료
    if (argc != 3) {
        printf("Usage: %s <number1> <number2> 입력하세요 ! \n", argv[0]);
        return 1;
    }

    // argv[1]과 argv[2]를 정수로 변환하여 더한 값을 계산
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int sum = num1 + num2;

    // 더한 결과 출력
    printf("%d + %d = %d\n", num1, num2, sum);

    return 0;
}


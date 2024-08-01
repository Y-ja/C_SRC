#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 진법 변환
int main() {
    char input[10000];
    int B;
    int result = 0;

    // 입력 받기
    scanf("%s %d", input, &B);

    int len = strlen(input);

    // 입력 유효성 검사 (B는 2 이상 36 이하의 정수여야 함)
    if (B < 2 || B > 36) {
        printf("Invalid base\n");
        return 1;
    }

    for (int i = 0; i < len; i++) {
        int digit;
        if (isdigit(input[i])) {
            digit = input[i] - '0';
        }
        else if (isalpha(input[i])) {
            char upper = toupper(input[i]);
            digit = upper - 'A' + 10;
        }
        else {
            printf("Invalid character in input\n");
            return 1;
        }

        // 유효한 숫자인지 확인
        if (digit >= B) {
            printf("Invalid digit for base %d\n", B);
            return 1;
        }

        // 자리값 계산 (거꾸로 된 진법 계산)
        result = result * B + digit;
    }

    printf("%d\n", result);

    return 0;
}
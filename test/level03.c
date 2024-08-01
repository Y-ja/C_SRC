#include <stdio.h>
int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    /*
      윤년 뜻
      2월 29일이 생겨남으로써 한 해가 366일이 된다는 것이다. (4년 주기)
    */

    // 윤년 판별
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("1\n");  // 윤년이면 1 출력
    } else {
        printf("0\n");  // 윤년이 아니면 0 출력
    }

    return 0;
}
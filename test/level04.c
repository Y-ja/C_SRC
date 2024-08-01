#include <stdio.h>

int main() {
    // 좌표를 저장할 변수
    int x, y;

    // 사용자로부터 좌표 입력 받기
    printf("좌표 x를 입력하세요: ");
    scanf("%d", &x);
    printf("좌표 y를 입력하세요: ");
    scanf("%d", &y);

    // 점이 어느 사분면에 위치하는지 판단
    if (x > 0 && y > 0) {
        printf("제 1 사분면\n");
    } else if (x < 0 && y > 0) {
        printf("제 2 사분면\n");
    } else if (x < 0 && y < 0) {
        printf("제 3 사분면\n");
    } else if (x > 0 && y < 0) {
        printf("제 4 사분면\n");
    } else if (x == 0 && y != 0) {
        printf("y축 위\n");
    } else if (x != 0 && y == 0) {
        printf("x축 위\n");
    } else {
        printf("원점\n");
    }

    return 0;
}
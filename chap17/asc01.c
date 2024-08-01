#include <stdio.h>

int main(void) {
    int a[5] = {3, 2, 1, 6, 5};
    int i, k, temp;

    // 버블 정렬 알고리즘
    for (i = 0; i < 4; i++) {
        for (k = i + 1; k < 5; k++) {
            if (a[i] > a[k]) {
                // 스왑
                temp = a[i];
                a[i] = a[k];
                a[k] = temp;
            }
        }
    }
    // 정렬된 배열 출력
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); // 줄바꿈 추가

    return 0;
}
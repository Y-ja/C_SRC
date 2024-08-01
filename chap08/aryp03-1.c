#include <stdio.h>

// 함수 선언
void input_ary(double *pa, int size);
double find_min(double *pa, int size);

int main(void) {
    double ary[5];
    double min;
    int size = sizeof(ary) / sizeof(ary[0]);

    input_ary(ary, size);
    min = find_min(ary, size);

    printf("입력한 배열의 최솟값: %.2lf\n", min); // 최솟값 출력

    return 0;
}

void input_ary(double *pa, int size) {
    int i;
    printf("%d 개의 실수 값 입력 -> ", size);

    for (i = 0; i < size; i++) {
        scanf("%lf", &pa[i]); // 배열 요소에 값을 입력받을 때 &pa[i] 사용
    }
}

double find_min(double *pa, int size) {
    double min;
    int i;

    min = pa[0];
    for (i = 1; i < size; i++) {
        if (pa[i] < min) min = pa[i];
    }
    return min;
}
#include <stdio.h>

// 함수 선언
void input_ary(double *pa , int size);
double find_max(double *pa , int size);

int main(void){
    double ary[5];
    double max;
    int size = sizeof(ary) / sizeof(ary[0]);

    input_ary(ary , size);
    max = find_max(ary , size);

    printf("입력한 배열의 최댓값: %.2lf\n", max); // 최댓값 출력

    return 0 ;
}

void input_ary(double *pa , int size){
    int i;
    printf("%d 개의 실수 값 입력 -> " , size);

    for (i = 0; i < size; i++)
    {
        scanf("%lf" , &pa[i]); // 배열 요소에 값을 입력받을 때 &pa[i] 사용
    }  
}

double find_max(double *pa , int size){
    double max;
    int i;

    max = pa[0];
    for (i = 1; i < size; i++) // i=1부터 시작하여 첫 번째 요소와 비교할 필요가 있습니다.
    {
        if (pa[i] > max) max = pa[i];
    }
    return max;
}
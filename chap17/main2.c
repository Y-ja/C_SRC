#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passes !"
#define ERP_PRN printf("허용 범위를 벗어났습니다! \n")

int main(void){
    double radius , area ;

    printf("반지름을 입력하세요(10이하) ->");
    scanf("%lf" , &radius);
    area = PI * radius * radius;
    if (area > LIMIT) ERP_PRN;
    else printf("원의 면적 -> %.2lf (%s) \n" , area , MSG);
    
    return 0;
}
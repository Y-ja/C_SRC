#include <stdio.h>
int main(void){
    int i1,k1 ;

    printf("숫자를 입력하세요 -> ");
    scanf("%d" , &i1);

    printf("끝 숫자를 입역하세요 -> ");
    scanf("%d" , &k1);

    printf("3의 배수이면서 7의 배수인 숫자 -> ");

    for (int i = 1; i < 100; i++)
    {
        if ((1 % 3) != 0 && (i % 7) !=0)
        {
           printf("%d" , i);
        }
        printf("\n");
    }
    return 0 ;
}
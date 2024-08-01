#include <stdio.h>
int sum(int x , int y){
    int temp;
    temp = x + y;
    return temp;
}
// 함수 정의(구현)
int main(void){
    int a = 10 , b = 20;
    int res;

    res = sum(a,b);
    printf("res -> %d\n" , res);

    return 0;
}
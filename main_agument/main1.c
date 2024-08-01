#include <stdio.h>
int main(int argc , char *argv[]){
    printf(" %s + %s = %d \n " , argv[1] , argv[2] , atoi(argv[1]) + atoi(argv[2]));
    
    // 갯수를 출력 
    // printf("argc -> %d\n" , argc);
    // // arvg[0]
    // for (int i = 0; i < argc; i++)
    // {
    //    printf("argv[%d]-> %s \n" , argv[i]);
       
    // }
    
     /*
     숫자를 3개 이하 입력 시 프로그램을 리턴 시켜서 종료 하는 프로그램
   */
    return 0;
}
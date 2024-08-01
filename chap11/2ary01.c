#include <stdio.h>
int main(void){
    // const int KOR = 0, ENG = 1, MAT = 2, SCI = 3;
    int score [3][4] = { {72,80,95,60}  , {68,98,83,90} , {75,72,84,90}};
    // { {72,80,95,60} 0행  , {68,98,83,90} 1행 , {75,72,84,90} 2행 } 

    int total ;
    double avg;
    int i , k;

    // for ( i = 0; i < 3; i++)
    // {
    //     printf("4과목 점수 입력 -> ");
    //     for ( k = 0; k < 4; k++)
    //     {
    //         scanf("%d" , &score[i][k]);
    //     }
    // }
    // 국어 점수 평균 구하시오
    int kor_total = 0;
    double kor_avg = 0.0;
    
     for (i = 0; i < 3; i++) {
        kor_total += score[i][0]; 
    }
    kor_avg = (double)kor_total / 3.0; 

    printf("국어 점수 총점 -> %d , 평균 -> %.2lf\n", kor_total, kor_avg);


    for (i = 0; i < 3; i++)
    {
        total = 0;
        for (k = 0; k < 4; k++)
        {
            total += score[i][k]; 
        }
        avg = total / 4.0 ;
        printf("총점 -> %d , 평균 -> %.2lf\n" , total , avg);
        
    }
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// 구조체 선언
typedef struct 
{
    int id;
    int kor;
    int eng;
    int math;
    int total;
    double avg;
    char grade;
    char name[30];

} Profile ;

void Input_list(Profile* lp);
void Print_list(Profile* lp);
void Sort_list(Profile* lp);

int main(void){
    Profile student_list[5];
    Input_list(student_list);
    printf("# 정렬 전 데이터...\n");
	Print_list(student_list);

	Sort_list(student_list);

	printf("# 정렬 후 데이터...\n");
	Print_list(student_list);

	return 0;
}

void Input_list(Profile *lp)
{
    int i;
	for (i = 0; i < 5; i++)
	{
		printf("학번 : ");
		scanf("%d", &lp -> id);
		printf("이름 : ");
		scanf("%s", &lp -> name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d%d%d", &lp -> kor, &lp -> eng, &lp -> math);

		lp -> total = lp -> kor + lp -> eng + lp -> math;
		lp -> avg = lp -> total / 3.0;
		if (lp -> avg >= 90)lp -> grade = 'A';
		else if (lp -> avg >= 80)lp -> grade = 'B';
		else if (lp -> avg >= 70)lp -> grade = 'C';
		else lp -> grade = 'F';

		lp++;
    
	}
}

void Print_list(Profile *lp)
{
    int i;

	for (i = 0; i < 5; i++)
	{
		printf("%5d %4s %5d %5d% 5d% 5d% 8.1lf %5c\n", lp[i].id,   lp[i].name, lp[i].kor,
			lp[i].eng,  lp[i].math,     lp[i].total,    lp[i].avg,  lp[i].grade);
	}
}

void Sort_list(Profile *lp)
{
    Profile temp;
	int i, j, max;
	for (i = 0; i < 5 - 1; i++)

	{
		max = i;
		for (j = i + 1; j < 5; j++)
		{
			if (lp[max].total < lp[j].total)
			{
				max = j;
        
			}
		}
		if (max != i)
		{
			temp = lp[max];
			lp[max] = lp[i];
			lp[i] = temp;
      
		}
	}
}
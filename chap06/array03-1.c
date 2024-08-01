#include <stdio.h>
int main(void)
{
    int num = 3;
	int score[num];                   
	int i;                          
	int total = 0;                  
	double avg;                    
    unsigned long count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < num; i++)         
	{
		scanf("%d", &score[i]);    
	}

	for (i = 0; i < num; i++)
	{
		total += score[i];         
	}
	avg = total / (double) count;              

	for (i = 0; i < num; i++)
	{
		printf("%5d", score[i]);   
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);  

	return 0;
}
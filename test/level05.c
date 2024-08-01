#include <stdio.h>
int main(void){
    /*
     2차원 배열
      N*M크기의 두 행렬 A와 B가 주어졌을 때, 두 행렬을 더하는 프로그램을 작성하시오.
    */ 
    int a[100][100];
	int b[100][100];
	int n,m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int k = 0; k < n; k++)
	{
		for(int l = 0; l < m; l++)
		{
			scanf("%d", &b[k][l]);
		}
	}
	for(int q = 0; q < n; q++)
	{
		for(int w = 0; w < m; w++)
		{
			a[q][w] += b[q][w];
			printf("%d ", a[q][w]);
		}
		printf("\n");
	}
	return 0;
}
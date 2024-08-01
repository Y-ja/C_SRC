#include <stdio.h>
// 색종이
int main(void)
{
	int white_board[101][101] = { 0, };
	int num, x_start, y_start;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &x_start, &y_start);

		for (int j = x_start; j < x_start + 10; j++)
		{
			for (int k = y_start; k< y_start + 10; k++)
			{
				white_board[j][k] = 1;
			}
		}
	}

	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (white_board[i][j] == 1)
			{
				count++;
			}
		}
	}

	printf("%d", count);

	return 0;
}
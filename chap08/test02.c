#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{
	int i, j, tmp, chck;

	for (i = 0; i < 6; i++)
	{
		printf("번호 입력 : ");
		scanf("%d", &tmp);
		chck = 0;
		for (j = 0; j < i; j++)
		{
			if (tmp == lotto_nums[j]) 
			{
				chck = 1;
				break;
			}
		}
		if (chck == 1)
		{
			printf("같은 번호가 있습니다!\n");
			i--;
		}
		else lotto_nums[i] = tmp;
	}
}

void print_nums(int* lotto_nums)
{
	int i;

	printf("로또 번호 : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
}
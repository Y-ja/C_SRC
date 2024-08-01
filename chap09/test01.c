#include <stdio.h>
int main(void)
{
	char word;
	int len, max = 0;
	
	while (1)
	{
		len = 0;
		word = getchar();
		if (word == EOF) break;
		while (word != '\n')
		{
			len++;
			word = getchar();
		}
		if (max < len) max = len;
	}
	printf("길이가 가장 긴 문장의 길이: %d\n", max);

	return 0;
}
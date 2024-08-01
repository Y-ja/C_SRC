#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[80];
	int change = 0;

	printf("문장 입력 : ");
	gets(sentence);

	for (int i = 0; i < sizeof(sentence); i++)
	{
		if ((sentence[i] >= 'A') && (sentence[i] <= 'Z'))
		{
			sentence[i] += 32; 
			change++;
		}
	}

	printf("바뀐 문장 : ");
	puts(sentence);
	printf("바뀐 문자 수 : %d\n", change);

	return 0;
}
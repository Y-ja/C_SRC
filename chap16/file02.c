#include <stdio.h>

int main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("ㅣ.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp); // 함수 파일의 데이터를 모두를 앍으면 EOF를 반환
		if (ch == EOF) break; 
		putchar(ch); // 표준 출력 함수
	}
	fclose(fp);

	return 0;
}
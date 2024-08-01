#include <stdio.h>
#include <string.h>
int main(void)
{
	FILE* afp, * bfp, * cfp;
	char astr[21];
	char bstr[21];
	char* ares;
	char* bres;
	int count;
    /* ----- 파일 열기 ------ */
	afp = fopen("a.txt", "r");
	if (afp == NULL)
	{
		printf("a.txt가 열리지 않았습니다.");
		return 1;
	}

	bfp = fopen("b.txt", "r");
	if (bfp == NULL) 
	{
		printf("b.txt가 열리지 않았습니다.");
		return 1;
	}

	cfp = fopen("c.txt", "w");
	if (cfp == NULL) 
	{
		printf("c.txt가 열리지 않았습니다.");
		return 1;
	}
    /* ------ 변수에 저장 ------ */
	while (1)
	{
		count = 0;
		bres = fgets(bstr, sizeof(bstr), bfp);

		while (1)
		{
			ares = fgets(astr, sizeof(astr), afp);
			if (ares == NULL) break;
      
			if (strcmp(bstr, astr) == 0) 
			{
				count++;
				break;
			}
      
		}
		if (count == 0) fputs(bstr, cfp);
    
		fseek(afp, 0, SEEK_SET);

		if (bres == NULL) break;
   
	}
	return 0;
} 
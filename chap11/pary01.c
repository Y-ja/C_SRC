#include <stdio.h>
int main(void){
    // 포인터 배열 선언 , 반복 제어 변수
    char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{ 
        // i 는 0 ~ 4까지 다섯번 반복
        // 배열 요소를 사용해 모든 문자열 출력
		printf("%s\n", pary[i]);
	}
   
	return 0;
}
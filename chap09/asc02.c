#include <stdio.h>
#include <string.h>

int main(void) {
	char str[80] = "straw";
    /*
        strcat 함수는 C 언어에서 제공되는 문자열 연결 함수입니다. 
        "String Concatenate"의 약자로, 두 개의 문자열을 연결하여 하나의 문자열로 만드는 역할을 합니다.
        ' char *strcat(char *dest, const char *src); '
    */
	strcat(str, "berry");
	printf("%s\n", str);
    /*
        strncat 함수는 C 언어에서 제공되는 문자열 연결 함수로, 
        두 문자열을 일정 개수의 문자만큼 제한하여 연결하는 역할을 합니다.
        ' char *strncat(char *dest, const char *src, size_t n); '
    */
	strncat(str, "piece", 3);
	printf("%s\n", str);

	return 0;
}
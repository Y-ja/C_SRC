#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printf_str(char **pstr, int count);

int main(void)
{
    char temp[80];
    char* str[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("문자열을 입력하세요 : ");
        if (fgets(temp, sizeof(temp), stdin) == NULL) {
            perror("fgets failed");
            exit(EXIT_FAILURE);
        }
        // Remove newline character if present
        temp[strcspn(temp, "\n")] = '\0';

        str[i] = (char*)malloc(strlen(temp) + 1);
        if (str[i] == NULL) {
            perror("malloc failed");
            exit(EXIT_FAILURE);
        }
        strcpy(str[i], temp);
    }

    // Print strings
    printf_str(str, 3);

    // Free allocated memory
    for (i = 0; i < 3; i++)
    {
        free(str[i]);
    }

    return 0;
}

void printf_str(char **pstr, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", pstr[i]);
    }
}

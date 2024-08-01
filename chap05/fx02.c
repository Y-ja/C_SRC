#include <stdio.h>

int sum(int num);

int main(void) {
    int num1 = 10;
    int num2 = 100;

    printf("1부터 %d까지의 합: %d\n", num1, sum(num1));
    printf("1부터 %d까지의 합: %d\n", num2, sum(num2));

    return 0;
}

int sum(int num) {
    int result = 0;
    for (int i = 1; i <= num; i++) {
        result += i;
    }
    return result;
}
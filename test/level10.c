#include <stdio.h>
#include <stdlib.h> // <malloc.h> 대신 <stdlib.h> 사용

int main() {
    int t;
    int* money;
    int money1 = 0;
    int q = 0, d = 0, n = 0, p = 0;

    scanf("%d", &t);
    money = (int*)malloc(t * sizeof(int)); 
    if (money == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // 오류 코드 반환
    }
    
    for (int i = 0; i < t; i++) {
        scanf("%d", &money[i]);
        money1 = money[i];
        q = money1 / 25;
        money1 = money1 - (25 * q);
        d = money1 / 10;
        money1 = money1 - (10 * d);
        n = money1 / 5;
        money1 = money1 - (5 * n);
        p = money1 / 1;
        printf("%d %d %d %d\n", q, d, n, p);
    }

    free(money); // 올바른 변수명 사용
    return 0;

}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 4, cols = 5;
    int **matrix = malloc(rows * sizeof(int *));
    
    if (!matrix) return 1;

    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols * sizeof(int));
        if (!matrix[i]) {
            while (i-- > 0) free(matrix[i]);
            free(matrix);
            return 1;
        }
    }

    // 값 입력받기
    printf("행렬의 값을 입력하세요:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 행렬 출력
    printf("입력된 행렬:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // 메모리 해제
    for (int i = 0; i < rows; i++) free(matrix[i]);
    free(matrix);

    return 0;
}
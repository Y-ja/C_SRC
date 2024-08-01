#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 4, cols = 5;
    int **matrix = malloc(rows * sizeof(int *));
    
    if (!matrix) {
        perror("메모리 할당 실패");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols * sizeof(int));
        if (!matrix[i]) {
            perror("메모리 할당 실패");
            while (i-- > 0) free(matrix[i]);
            free(matrix);
            return 1;
        }
    }

    // 초기화 및 출력
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 0;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // 메모리 해제
    for (int i = 0; i < rows; i++) free(matrix[i]);
    free(matrix);

    return 0;
}

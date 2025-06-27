#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix_row, matrix_col;
    scanf("%d %d", &matrix_row, &matrix_col);

    int **matrix1 = malloc(sizeof(int *) * matrix_row);
    for(int i = 0; i < matrix_row; i++) {
        matrix1[i] = malloc(sizeof(int) * matrix_col);

        for(int j = 0; j < matrix_col; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    int **matrix2 = malloc(sizeof(int *) * matrix_row);
    for(int i = 0; i < matrix_row; i++) {
        matrix2[i] = malloc(sizeof(int) * matrix_col);

        for(int j = 0; j < matrix_col; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i = 0; i < matrix_row; i++) {
        for(int j = 0; j < matrix_col; j++) {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < matrix_row; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
    }
    free(matrix1);
    free(matrix2);
}
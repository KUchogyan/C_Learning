#include <stdio.h>
#include <stdlib.h>

int InnerProduct(int pos_i, int pos_j, int *mat1, int *mat2, int mat1Col, int mat2Col) {
    int sum = 0;

    pos_i = pos_i * mat1Col;

    for(int i = 0; i < mat1Col; i++) {
        sum += mat1[pos_i + i] * mat2[pos_j + (i * mat2Col)];
    }

    return sum;
}

int main() {
    int row1, col1;
    scanf("%d %d", &row1, &col1);

    int *matrix1 = malloc(sizeof(int) * (row1 * col1));
    for(int i = 0; i < (row1 * col1); i++) {
        scanf("%d", &matrix1[i]);
    }


    int row2, col2;
    scanf("%d %d", &row2, &col2);

    int *matrix2 = malloc(sizeof(int) * (row2 * col2));
    for(int i = 0; i < (row2 * col2); i++) {
        scanf("%d", &matrix2[i]);
    }


    for(int i = 0; i < row1; i++) {
        for(int j = 0; j < col2; j++) {
            printf("%d ", InnerProduct(i, j, matrix1, matrix2, col1, col2));
        }

        printf("\n");
    }

    free(matrix1);
    free(matrix2);

    return 0;
}
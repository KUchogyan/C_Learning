#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int row, col;
    printf("row >> ");
    scanf("%d", &row);

    printf("col >> ");
    scanf("%d", &col);

    int **list = malloc(sizeof(int) * row);
    for(int i = 0; i < col; i++) {
        list[i] = malloc(sizeof(int) * col);
        for(int j = 0; j < col; j++) {
            list[i][j] = srand(time(NULL)) % 9 + 1;
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }


}
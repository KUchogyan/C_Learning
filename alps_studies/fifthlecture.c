#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int sero, garo;
    scanf("%d %d", &sero, &garo);

    char **arr = malloc((sero + 1) * sizeof(char*));
    for(int i = 0; i < sero; i++){
        arr[i] = malloc((garo + 1) * sizeof(char));
    }

    for(int i = 0; i < sero; i++){
        scanf("%s", arr[i]);
    }

    /**
    int **ans = malloc(sizeof(int *) * (sero + 3));
    for(int i = 0; i < (sero + 3); i++){
        ans[i] = malloc((garo + 3) * sizeof(int));
    }*/
    int **ans = malloc(sizeof(int *) * (sero + 2));
    for(int i = 0; i < (sero + 2); i++){
        ans[i] = malloc((garo + 2) * sizeof(int));
    }


    for(int i = 0; i < sero; i++){
        for(int j = 0; j < garo; j++){
            if(arr[i][j] == '*'){
                ans[i][j] += 1;
                ans[i][j+1] += 1;
                ans[i][j+2] += 1;
                ans[i+1][j] += 1;
                ans[i+1][j+2] += 1;
                ans[i+2][j] += 1;
                ans[i+2][j+1] += 1;
                ans[i+2][j+2] += 1;
            }
        }
    }

    
    for(int i = 1; i < sero + 1; i++){
        for(int j = 1; j < garo + 1; j++){
            if(arr[i-1][j-1] == '*')
                printf("*");
            else
                printf("%d", ans[i][j]);
        }

        printf("\n");
    }

    for(int i = 0; i < sero; i++){
        free(arr[i]);
    }

    free(arr);
    
    return 0;
}
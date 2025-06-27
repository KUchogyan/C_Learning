#include <stdio.h>
#include <stdlib.h>

void GetMaxMin(int **list, int row, int columnNumber) {
    int max = list[row][0], min = list[row][0];

    for(int i = 1; i < columnNumber; i++) {
        if(max < list[row][i]) max = list[row][i];
        else if(min > list[row][i]) min = list[row][i];
    }

    list[row][0] = max;
    list[row][1] = min;
}

int main() {
    int testnum;
    scanf("%d", &testnum);

    int **testlist = malloc(sizeof(int*) * testnum);
    int *caselistcount = malloc(sizeof(int) * testnum);

    //입력받고 처리하는 곳
    for(int i = 0; i < testnum; i++) {
        int casenum;
        scanf("%d", &casenum);
        caselistcount[i] = casenum;

        testlist[i] = malloc(sizeof(int) * casenum);

        for(int j = 0; j < casenum; j++) {
            scanf("%d", &testlist[i][j]);
        }

        GetMaxMin(testlist, i, casenum);
    }

    //값 출력하는 곳
    for(int i = 0; i < testnum; i++) {
        if(caselistcount[i] != 1) {
            printf("%d %d\n", testlist[i][1], testlist[i][0]);
        } else printf("%d %d\n", testlist[i][0], testlist[i][0]);
    }
    
    //free 시키는 곳
    for(int i = 0; i < testnum; i++) {
        free(testlist[i]);
    }

    free(testlist);

    return 0;
}
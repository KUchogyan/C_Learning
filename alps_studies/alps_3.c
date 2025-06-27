#include <stdio.h>
#include <stdlib.h>

int main() {
    int listsize;
    scanf("%d", &listsize);

    int *pibonachi = malloc(sizeof(int) * (listsize + 1));
    pibonachi[0] = 0;
    pibonachi[1] = 1;

    for(int i = 2; i <= listsize; i++) {
        pibonachi[i] = pibonachi[i - 2] + pibonachi[i - 1];

        //printf("%d\n", pibonachi[i]);
    }

    printf("%d\n", pibonachi[listsize]);


    return 0;
}

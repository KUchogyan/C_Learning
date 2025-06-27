#include <stdio.h>
#include <stdlib.h>

int main() {
    int sizeoflist, standardNum;
    scanf("%d", &sizeoflist);

    int *list = malloc(sizeof(int) * sizeoflist);
    
    for(int i = 0; i < sizeoflist; i++) {
        scanf("%d", &list[i]);
    }

    int min = list[0], max = list[0];
    for(int i = 1; i < sizeoflist; i++) {
        if(list[i] < min) min = list[i];
        else if(list[i] > max) max = list[i];
    }

    printf("%d %d\n", min, max);

    return 0;
}

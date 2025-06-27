#include <stdio.h>
#include <stdlib.h>

int RightLength(int a, int b, int c) {
    if((a * a) == (b * b) + (c * c)) return 1;
    else return 0;
}


int main() {
    int count = 1;
    int *list = malloc(sizeof(int) * count);
    while(1) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0) break;

        list = realloc(list, sizeof(int) * count);
        list[count - 1] = 0;

        if(RightLength(a, b, c) || RightLength(b, a, c) || RightLength(c, a, b))
            list[count - 1] = 1;
    
        count++;
    }

    for(int i = 0; i < count - 1; i++) {
        if(list[i] == 1) printf("right\n");
        else printf("wrong\n");
    }

    free(list);
    return 0;
}
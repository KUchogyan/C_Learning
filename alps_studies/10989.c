#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, inp;
    scanf("%d", &num);

    int *numcount = calloc(10001, sizeof(int));
    for(int i = 0; i < num; i++) {
        scanf("%d", &inp);
        numcount[inp]++;
    }

    for(int i = 0; i < 10001; i++) {
        while(numcount[i]--) {
            printf("%d\n", i);
        }
    }

}
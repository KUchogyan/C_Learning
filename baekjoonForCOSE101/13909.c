#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;
    scanf("%d", &count);

    char *list = malloc(sizeof(char) * count);
    for(int i = 0; i < count; i++) {
        list[i] = 0;
    }

    for(int i = 1; i <= count; i++) {
        char index = i - 1;
        while(index < count) {
            if(list[index] == 0) list[index] = 1;
            else list[index] = 0;
            index += i;
        }
    }

    int openedwindow = 0;
    for(int i = 0; i < count; i++) {
        if(list[i] == 1) openedwindow++;
    }
    printf("%d\n", openedwindow);

    free(list);
    return 0;
}
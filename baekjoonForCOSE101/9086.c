#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int count = 0;
    scanf("%d", &count);

    char **list = malloc(sizeof(char*) * count);
    for(int i = 0; i < count; i++) {
        char buffer[1001] = {0, };
        scanf("%s", buffer);

        int len = strlen(buffer);
        list[i] = malloc(sizeof(char) * len);
        strcpy(list[i], buffer);
    }

    for(int i = 0; i < count; i++) {
        //printf("%s\n", list[i]);
        int len = strlen(list[i]);
        if(len < 2) {
            printf("%c%c\n", list[i][0], list[i][0]);
        } else {
            printf("%c%c\n", list[i][0], list[i][len - 1]);
        }
        free(list[i]);
    }
    free(list);

    return 0;
}
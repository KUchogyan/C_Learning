#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);

    int *list = malloc(sizeof(int) * num);
    for(int i = 0; i < num; i++) {
        scanf("%d", &list[i]);
    }

    for(int i = 0; i < num; i++) {
        for(int j = i + 1; j < num; j++) {
            if(list[i] > list[j]) {
                int temp;
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }

    for(int i = 0; i < num; i++) { 
        printf("%d\n", list[i]);
    }
}
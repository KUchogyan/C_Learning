#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    char *list = malloc(sizeof(char) * (n + 1));
    scanf("%s", list);

    int sum = 0;
    for(int i = 0; i < n; i++) {
        int num = list[i] - '0';
        //printf("%d\n", num);
        sum += num;
    }

    printf("%d\n", sum);


    free(list);
    return 0;
}
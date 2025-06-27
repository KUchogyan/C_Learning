#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int inverse(char *n) {
    char temp[4] = {0, };
    temp[0] = n[2];
    temp[1] = n[1];
    temp[2] = n[0];

    return atoi(temp);
}


int main() {
    char *a = malloc(sizeof(char) * 4);
    char *b = malloc(sizeof(char) * 4);
    scanf("%s %s", a, b);

    //printf("%d %d\n", inverse(a), inverse(b));
    int n = inverse(a);
    int m = inverse(b);

    if(n > m) printf("%d\n", n);
    else printf("%d\n", m);

    free(a);
    free(b);

    return 0;
}
#include <stdio.h>

int main() {
    char buffer[1001] = {0, };
    scanf("%s", buffer);

    int index = 0;
    scanf("%d", &index);

    printf("%c\n", buffer[index - 1]);

    return 0;
}
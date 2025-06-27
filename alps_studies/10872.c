#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int sum = 1;
    for(int i = num; i > 0; i--) {
        sum *= i;
    }

    printf("%d\n", sum);

    return 0;
}
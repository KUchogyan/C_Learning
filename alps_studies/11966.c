#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int percent = 0;
    while(num != 1) {
        percent += num % 2;
        num = num / 2;
    }

    if(percent == 0) printf("1\n");
    else printf("0\n");
}
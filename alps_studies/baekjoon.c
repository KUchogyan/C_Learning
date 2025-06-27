#include <stdio.h>
#include <stdlib.h>

/*int Pow_10(int count) {
    int num = 1;

    for(int i = 0; i < count; i++) {
        num *= 10;
    }

    return num;
}*/

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if(x > 0) {
        if(y > 0) printf("1\n");
        else printf("4\n");
    } else {
        if(y > 0) printf("2\n");
        else printf("3\n");
    }


    return 0;
}
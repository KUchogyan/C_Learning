#include <stdio.h>

int GetN1(int num) {
    int n10 = num / 10;
    return num - n10 * 10;
}

int ShakeNum(int num) {
    int sum = num / 10 + GetN1(num);
    return GetN1(num) * 10 + GetN1(sum);
}


int main() {
    int num;
    scanf("%d", &num);

    int result = num;
    int count = 0;
    do {
        result = ShakeNum(result);
        count++;
    } while(num != result);

    printf("%d\n", count);


    return 0;
}
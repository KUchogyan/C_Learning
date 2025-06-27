#include <stdio.h>

int FindGcd(int a, int b) {
    int gcd;
    gcd = a % b;
    
    if(gcd == 0) return b;
    else return FindGcd(b, gcd);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int temp;
    if(a < b) {
        temp = a;
        a = b;
        b = temp;
    } else if(a == b) {
        printf("%d\n%d\n", a, a);
        return 0;
    }

    int gcd = FindGcd(a, b);
    printf("%d\n", gcd);

    int gcm = (a / gcd) * (b / gcd) * gcd;
    printf("%d\n", gcm);

    return 0;
}
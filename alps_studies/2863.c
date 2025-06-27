#include <stdio.h>


float a, b, c, d;

float GetSum(float a, float b, float c, float d) {
    return (a / c) + (b / d);
}

void Turn() {
    float temp = a;
    a = c;
    c = d;
    d = b;
    b = temp;
}


int main() {
    scanf("%f %f %f %f", &a, &b, &c, &d);

    float max = 0;
    int count;
    for(int i = 0; i < 4; i++) {
        if(GetSum(a, b, c, d) > max) {
            max = GetSum(a, b, c, d);
            count = i;
        }
        //printf("GetSum is ...%f\n", GetSum(a, b, c, d));
        Turn();
    }

    printf("%d\n", count);


    return 0;
}
#include <stdio.h>

int main() {
    char list[101] = {0, };
    scanf("%s", list);

    int i = 0, count = 0;
    while(list[i] != '\0') {
        if(list[i] == 'c' && list[i+1] == '=') count++;
        else if(list[i] == 'c' && list[i+1] == '-') count++;
        else if(list[i] == 'd' && list[i+1] == 'z' && list[i+2] == '=') {
            count += 2;
            i += 2;
        }
        else if(list[i] == 'd' && list[i+1] == '-') count++;
        else if(list[i] == 'l' && list[i+1] == 'j') count += 2;
        else if(list[i] == 'n' && list[i+1] == 'j') count += 2;
        else if(list[i] == 's' && list[i+1] == '=') count++;
        else if(list[i] == 'z' && list[i+1] == '=') count++;
        else count++;
        i++;
    }
    printf("%d\n", count);

    return 0;
}
#include <stdio.h>

int main() {
    char buffer[1000001] = {0, };
    scanf("%s", buffer);

    int i = 0;
    int list[26];
    for(int i = 0; i < 26; i++) list[i] = -1;

    while(buffer[i] != '\0') {
        if(buffer[i] >= 'a' && buffer[i] <= 'z') {
            int index = buffer[i] - 'a';
            list[index]++;
        } else {
            int index = buffer[i] - 'A';
            list[index]++;
        }
        i++;
    }

    int largelarge = 0, large = 0;
    for(int j = 0; j < 26; j++) {
        if(list[j] > list[largelarge]) largelarge = j;
        else if(list[j] >= list[large]) large = j;
    }

    if(largelarge == large) printf("A\n");
    else if(list[largelarge] == list[large]) printf("?\n");
    else printf("%c\n", 'A' + largelarge);

    return 0;
}
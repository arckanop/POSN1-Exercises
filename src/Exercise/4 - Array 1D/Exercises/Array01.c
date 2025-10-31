#include <stdio.h>

int main() {
    int i;
    char ch[5];
    scanf("%c", ch[0]);

    for (i = 1; i <= 5; i++) {
        ch[i] = ch[0] + i;
    }

    for (i = 0; i <= 5; i++) {
        printf("%c", ch[i]);
    }
    return 0;
}

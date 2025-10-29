#include <stdio.h>

int main() {
    int i;
    char ch[26], x;
    scanf("%c", &x);
    ch[x - 65] = x;

    for (i = 0; i < 26; i++) {
        ch[i] = 'A' + i;
    }

    for (i = x - 'A'; i < 26; i++) {
        printf("%c", ch[i]);
    }
    return 0;
}

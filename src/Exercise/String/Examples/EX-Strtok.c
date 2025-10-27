#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "https://www.posn.or.th";
    char s[] = ".";
    char *token;

    token = strtok(str, s);

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    return 0;
}

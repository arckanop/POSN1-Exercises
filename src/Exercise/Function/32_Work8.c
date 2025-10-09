#include <stdio.h>

char check(char ch) {
    if (ch == 'Y' || ch == 'y' || ch == 'N' || ch == 'n') printf("yes");
    else printf("no");
}

int main() {
    char ch;
    printf("Enter a character to check [yes/no]: ");
    scanf("%c", &ch);

    printf("The answer is ");
    check(ch);
    return 0;
}

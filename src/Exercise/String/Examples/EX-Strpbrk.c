#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Happy Newyear";
    char str2[] = "yw";

    char *p = strpbrk(str1, str2);

    printf("%ld\n", p);
    printf("%d\n", p - str1);
    return 0;
}

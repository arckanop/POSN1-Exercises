#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Happy Newyear";
    char *ptr;
    int position = -1;

    ptr = strchr(str, 'p');

    if (ptr != NULL) {
        position = ptr - str;
    }

    printf("%d", position);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "DSPOSNDSPOSN";
    char str2[] = "SND";
    char *ptr;

    ptr = strstr(str1, str2);

    printf("%ld\n", ptr);
    printf("%d\n", ptr-str1);
    printf("%s\n", ptr);
    return 0;
}

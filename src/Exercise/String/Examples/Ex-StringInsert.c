#include <stdio.h>

int main() {
    char str1[] = "Happy Year 2026";
    char str2[] = "New";
    char s1[10], s2[10], s3[10];
    char result[50];

    sscanf(str1, "%s %s %s", s1, s2, s3);
    printf("%s %s %s %s", s1, str2, s2, s3);

    return 0;
}

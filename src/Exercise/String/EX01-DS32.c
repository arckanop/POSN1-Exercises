//Kanop Sutharomna

#include <stdio.h>

int main() {
    char str[100];
    int i, n;

    scanf("%s %d", str, &n);

    if (n >= 1 && n <= 10) {
        for (i = 0; i < n; i++) {
            printf("%s\n", str);
        }
    } else {
        printf("-1");
    }
    return 0;
}

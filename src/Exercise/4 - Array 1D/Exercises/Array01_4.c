#include <stdio.h>

int main() {
    int i, n = 10, pass = 0;
    int score[11];

    for (i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
        if (score[i] >= 50) pass++;
    }

    printf("Pass = %d\nFail = %d", pass, n - pass);

    return 0;
}

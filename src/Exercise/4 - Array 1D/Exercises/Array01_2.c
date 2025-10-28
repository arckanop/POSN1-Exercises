#include <stdio.h>

int main() {
    int i, n = 10;
    int score[11];

    for (i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
    }

    for (i = 10 - 1; i >= 0; i--) {
        printf("%d ", score[i]);
    }
    return 0;
}

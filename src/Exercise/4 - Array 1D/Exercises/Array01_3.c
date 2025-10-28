#include <stdio.h>

int main() {
    int i, n = 10;
    float sum = 0;
    int score[11];

    for (i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
        sum += (float) score[i];
    }

    printf("Sum = %d\nAverage = %d", sum, sum / 10);

    return 0;
}

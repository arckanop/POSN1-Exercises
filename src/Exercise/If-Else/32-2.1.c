#include <stdio.h>

int main() {
    float x, sum = 0.00;
    int i;

    for (i = 0; i < 5; i++) {
        scanf("%f", &x);

        if (x > 100 || x < 0) {
            printf("Invalid input!!");
            return 0;
        } else {
            sum = sum + x;
        }
    }

    printf("%.2f", sum / 5);
    return 0;
}

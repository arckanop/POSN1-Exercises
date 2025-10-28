#include <stdio.h>

int main() {
    int i, a[5] = {-1, 6, 9, 2, -9};
    int max;

    for (i = 0; i < 5; i++) {
        if (i == 0) max = a[0];

        if (a[i] > max) max = a[i];
    }

    printf("Max = %d", max);
    return 0;
}

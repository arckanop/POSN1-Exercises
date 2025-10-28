#include <stdio.h>

int main() {
    int i, a[5] = {-1, 6, 9, 2, -9};
    int min;

    for (i = 0; i < 5; i++) {
        if (i == 0) min = a[0];

        if (a[i] < min) min = a[i];
    }

    printf("Min = %d", min);
    return 0;
}

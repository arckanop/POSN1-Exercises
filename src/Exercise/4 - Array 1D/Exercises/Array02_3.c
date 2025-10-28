#include <stdio.h>

int main() {
    int a[5] = {-1, 6, 9, 2, -9};
    int i, max, b[5];

    for (i = 0; i < 5; i++) {
        if (a[i] >= 0) b[i] = a[i];
        else b[i] = -a[i];
    }
    return 0;
}

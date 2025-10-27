#include <stdio.h>

int main() {
    int z[10] = {3, 2, 11, 17, 2, 18, 21, 20, 6, 4};
    int target = 157;
    int s = sizeof(z)/sizeof(z[0]);
    int position = -1;
    int i = 0;

    while (z[i] != target) {
        if (i >= s) {
            position = -1;
            break;
        }
        position = ++i;
    }

    printf("%d", position);

    return 0;
}

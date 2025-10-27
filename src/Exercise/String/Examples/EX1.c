#include <stdio.h>

int main() {
    int z[10] = {3, 2, 11, 17, 2, 18, 21, 20, 6, 4};
    int target = 17;
    int s = sizeof(z)/sizeof(z[0]);
    int position = -1;

    for (int i = 0; i < s -1; i++) {
        if (z[i] == target) {
            position = i;
            break;
        }
    }
    printf("%d", position);

    return 0;
}

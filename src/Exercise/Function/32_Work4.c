#include <stdio.h>

void f_x(int x) {
    printf("%2d   %3d\n", x, (x * x) + (3 * x) + 1);
}

int main() {
    printf("x   f(x)\n");
    int i;

    for (i = 1; i <= 10; i++) {
        f_x(i);
    }
    return 0;
}

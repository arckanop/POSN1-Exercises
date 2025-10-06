#include <stdio.h>

int main() {
    int i, x, even = 0, odd = 0;

    for (i = 0; i < 6; i++) {
        scanf("%d", &x);

        if (x % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even = %d numbers\nOdd = %d numbers", even, odd);
    return 0;
}

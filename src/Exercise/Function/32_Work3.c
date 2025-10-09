#include <stdio.h>

void timesTable(int n) {
    int i;
    for (i = 1; i <= 12; i++) {
        printf("%d x %2d = %3d\n", n, i, n * i);
    }

    return;
}

int main() {
    int n;

    printf("Enter number for the multiplication table: ");
    scanf("%d", &n);

    timesTable(n);

    return 0;
}

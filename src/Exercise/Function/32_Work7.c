#include <stdio.h>

int recursivePower(int x, int y) {
    if(y == 0) return 1;
    else if (y == 1) return x;
    else return x * recursivePower(x, y - 1);
}

int main() {
    int x, y;
    printf("Input x and y to find x raised to the power of y: ");
    scanf("%d %d", &x, &y);

    printf("x raised to the power of y = %d", recursivePower(x, y));
    return 0;
}

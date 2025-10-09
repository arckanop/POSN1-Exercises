#include <stdio.h>

void f_x(int x) {
    printf("%d\n", (x * x) + 1);
}

int main() {
    int x;
    printf("Enter the value of x for the function f(x) = x^2 + 1: ");
    scanf("%d", &x);

    printf("f(%d) = ", x);
    f_x(x);

    return 0;
}

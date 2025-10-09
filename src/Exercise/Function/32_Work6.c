#include <stdio.h>

long long fact(long long x) {
    if (x == 0) return 1;
    else return x * fact(x - 1);
}

int main() {
    long long x;
    printf("Enter the number to find the factorial of: ");
    scanf("%lld", &x);

    if (x >= 0) {
        printf("%lld! = %lld", x, fact(x));
    } else {
        printf("Error!");
    }

    return 0;
}

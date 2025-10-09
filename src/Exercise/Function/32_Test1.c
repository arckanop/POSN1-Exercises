#include <stdio.h>

long long sum(int a, int b, int c) {
    long long result = a + b + c;
    return result;
}

int main() {
    long long total = sum(10, 20, 30);
    printf("%lld", total);
}

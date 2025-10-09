#include <stdio.h>

long long fib[500];

long long fibonacci(long long n) {
    if (n == 1 || n == 2) {
        fib[n] = 1;
        return 1;
    }
    else {
        long long x = fibonacci(n - 1) + fibonacci(n - 2);
        fib[n] = x;
        return x;
    }
}

int main() {
    long long n;
    int i;

    printf("Enter the nth term of the Fibonacci sequence of: ");
    scanf("%lld", &n);

    if (n != 0) {
        fibonacci(n);

        for (i = 1; i <= n; i++) printf("%lld ", fib[i]);

        //printf("The Fibonacci number is: %lld", fib(n));
    } else {
        printf("0");
    }

    return 0;
}
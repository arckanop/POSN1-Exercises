#include <stdio.h>

int main() {
    long long n, tmp, i;
    int j;

    scanf("%lld", &n);
    long long arr[n + 5];

    for (i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < n - 1 ; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j +1];
                arr[j  +1 ] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%lld", arr[i]);
        if (i != n - 1) printf(",");
    }

    printf("\n");

    for (i = n - 1; i >= 0; i--) {
        printf("%lld", arr[i]);
        if (i != 0) printf(",");
    }

    return 0;
}

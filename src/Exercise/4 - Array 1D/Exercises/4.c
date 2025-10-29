#include <stdio.h>

int main() {
    int i, j, n, x, miniIndex, temp;
    scanf("%d", &n);

    int arr[n + 5];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    x = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < n -1; i++) {
        miniIndex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[miniIndex]) {
                miniIndex = j;
            }
        }
        temp = arr[miniIndex];
        arr[miniIndex] = arr[i];
        arr[i] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (n % 2 == 0) {
        float median = (arr[n / 2] + arr[n / 2 - 1]) / 2.0;
        printf("%.2f", median);
    } else {
        int median = arr[n / 2];
        printf("%d", median);
    }

    return 0;
}

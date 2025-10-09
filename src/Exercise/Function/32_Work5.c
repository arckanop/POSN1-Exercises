#include <stdio.h>

int num[3];

int max(int num[]) {
    int i, max;
    for (i = 0; i < 3; i++) {
        if (i == 0) max = num[i];
        if (num[i] > max) max = num[i];
    }

    return max;
}

int main() {
    int i;

    printf("Enter 3 numbers: ");

    for (i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }

    printf("Maximum Value = %d", max(num));
    return 0;
}

#include <stdio.h>

int main() {
    int i, j, mtrx[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mtrx[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d", mtrx[i][j]);
        }
        printf("\n");
    }

    return 0;
}

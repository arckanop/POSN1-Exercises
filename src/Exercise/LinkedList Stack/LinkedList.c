#include <stdio.h>

char arr[32], new[32];
int main() {
    char ch;
    int len = 0;

    while (1) {
        int i, j, x, tmp, idx;
        printf("\nMenu: \n1: Insert\n2: Delete\n3: Print\n4: Exit\n>> ");
        scanf(" %c", &ch);

        switch (ch) {
        case '1':
            scanf(" %d", &x);

            if (x >= 0 && x <= 9) {
                if (len < 20) {
                    arr[len] = x + '0';
                    len++;

                    for (i = 0; i < len - 1; i++) {
                        for (j = 0; j < len - i - 1; j++) {
                            if (arr[j] > arr[j+1]) {
                                tmp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = tmp;
                            }
                        }
                    }
                } else {
                    printf("The array will be too long\n");
                }
            } else {
                printf("Please enter a number (0-9)\n");
            }

            break;
        case '2':
            scanf(" %d", &x);

            idx = 0;

            for (i = 0; i < len; i++) {
                if (arr[i] != x + '0') {
                     new[idx] = arr[i];
                     idx++;
                }
            }
            printf("\n");
            for (i = 0; i < len; i++){
                arr[i] = '\0';
            }
            for (i = 0; i < idx; i++) {
                arr[i] = new[i];
                printf("%c ", arr[i]);
            }
            printf("\n");
            break;
        case '3':
            for (i = 0; i < len; i++) {
                    printf("%c ", arr[i]);
            }
            if (i == 0) {
                printf("not have data");
            }
            break;
        case '4':
            return 0;
        default:
            printf("Please Enter option 1 - 4");
        }
    }

    return 0;
}

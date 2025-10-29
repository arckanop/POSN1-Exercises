#include <stdio.h>

int main() {
    const char day[7][20] = {"Monday    ", "Tuesday   ", "Wednesday ", "Thursday  ", "Friday    ", "Saturday  ", "Sunday    "};
    char name[100];
    int i, j;
    int temp[7][2];
    int Max, Min;
    float SumH, SumL;

    printf("Enter your name: ");
    scanf("%s", name);

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &temp[i][j]);

            if (i == 0) {
                if (j == 0) Min = temp[i][j];
                else Max = temp[i][j];
            }

            if (j == 0) {
                if (i == 0) SumH += (float) temp[i][j];
                else SumH += temp[i][j];
                if (temp[i][j] > Max) Max = temp[i][j];
            } else {
                if (i == 0) SumL = temp[i][j];
                else SumL += temp[i][j];
                if (temp[i][j] < Min) Min = temp[i][j];
            }
        }
    }

    printf("Hello %s\n", name);

    for (i = 0; i < 32; i++) printf("*");

    printf("\n");

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 2; j++) {
            if (j == 0) printf("High Temp ");
            else printf("Low  Temp ");
            
            printf("%s", day[i % 7]);

            printf(": %d\n", temp[i][j]);
        }
    }

    for (i = 0; i < 32; i++) printf("*");
    printf("\n");

    printf("Max Temperature is %d C\nMin Temperature is %d C\n", Max, Min);
    printf("Average High Temperature is %.2f C\nAverage Low  Temperature is %.2f C", SumH/7.0, SumL / 7.0);

    return 0;
}

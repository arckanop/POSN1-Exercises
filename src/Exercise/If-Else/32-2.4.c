#include <stdio.h>

int main() {
    int mid, fin;
    printf("Please enter midterm score: ");
    scanf("%d", &mid);
    printf("Please enter final score: ");
    scanf("%d", &fin);

    if (mid < 0 || mid > 100 || fin < 0 || fin > 100) {
        printf("Error! Please enter the correct score (0 <= score <= 100)");
    } else {
        float avg = (mid + fin) / 2;
        printf("Your Score = %.0f %%\nGrade = ", avg);

        if (avg >= 80) {
            printf("G, Good");
        } else if (avg >= 50) {
            printf("P, Pass");
        } else if (avg < 50) {
            printf("F, Fail");
        }
    }

    return 0;
}

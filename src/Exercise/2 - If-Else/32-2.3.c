#include <stdio.h>

int main() {
    int ID;
    float salary, ot, total, bonus;

    scanf("%d %f %f", &ID, &salary, &ot);

    total = salary + ot;

    if (total >= 100000) {
        bonus = 10;
    } else if (total >= 70000) {
        bonus = 7;
    } else if (total >= 50000) {
        bonus = 5;
    } else if (total >= 30000) {
        bonus = 3;
    } else {
        bonus = 1;
    }

    printf("%.2f", total + (total * bonus) / 100);

    return 0;
}

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age to calculate the ticket price: ");
    scanf("%d", &age);

    if (age < 0 || age > 100) {
        printf("Age Error!!");
    } else if (age < 3 ) {
        printf("Your price is Free!!");
    } else if (age >= 3 && age < 60) {
        printf("Your price is 8 THB");
    } else if (age >= 60) {
        printf("Your price is 4 THB");
    }

    return 0;
}

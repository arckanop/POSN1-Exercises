#include <stdio.h>

int main() {
    float width, length;
    printf("Enter the rectangle's width (in units): ");
    scanf("%f", &width);
    printf("Enter the rectangle's length (in units): ");
    scanf("%f", &length);
    printf("The area is: %.2f units^2", width * length);
    return 0;
}

#include <stdio.h>

struct book {
    char name[100];
    float price;
};

int main() {
    struct book bk;

    printf("Enter book name : ");
    scanf("%s", bk.name);

    printf("Enter book price : ");
    scanf("%f", &bk.price);


    printf("\nBook : %s\nPrice : %.2f\nDiscount 10 percent: %.2f\nTotal price : %.2f", bk.name, bk.price, (bk.price * 10)/100, (bk.price * 90)/100);

    return 0;
}

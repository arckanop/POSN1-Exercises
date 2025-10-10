#include <stdio.h>

struct book {
    int id;
    char name[60];
    char author[50];
    float price;
};

int main() {
    int i, target, found = 0;

    struct book rec[5] = {
        {1001, "Harry Potter", "J. K. Rowling", 1256.70},
        {1002, "Unfortunate Events", "Lemony Snicket", 1344.47},
        {1003, "JAVA language", "Teerawat Prakobpol", 189.05},
        {1004, "Microprocessor", "Teerawat Prakobpol", 342.00},
        {1005, "Basic C language", "Teerawat Prakobpol", 225.05}
    };

    printf("id   name\t\t\t author\t\t\t price\n");
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", rec[i].id);
        printf("%-20s", rec[i].name);
        printf("%-25s", rec[i].author);
        printf("%10.2f\n", rec[i].price);
    }

    printf("Enter the book's id of the book that you want to find: ");
    scanf("%d", &target);

    for (i = 0; i < 5; i++) {
        if (rec[i].id == target) {
            found = 1;
            printf("ID: %d, Name: %s\n", rec[i].id, rec[i].name);
            printf("Author: %s, Price: %.2f" ,rec[i].author, rec[i].price);
            break;
        }
    }

    if (found == 0) printf("No book with the ID %d found", target);

    return 0;
}

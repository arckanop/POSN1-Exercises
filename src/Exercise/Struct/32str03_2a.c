#include <stdio.h>

struct book {
    int id;
    char name[60];
    char author[50];
    float price;
};

int main() {
    int i, j, found = 0;
    char target;

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

    printf("Enter the book's name of the book that you want to find: ");
    scanf("%c", &target);

    for (i = 0; i < 5; i++) {
        for (j = 0; rec[i].name[j] != '\0'; j++) {
            if (rec[i].name[j] == target) {
                if(found == 0) {
                    printf("\nid   name\t\t\t author\t\t\t price\n");
                    printf("-------------------------------------------------------------\n");
                }
                printf("%d ", rec[i].id);
                printf("%-20s", rec[i].name);
                printf("%-25s", rec[i].author);
                printf("%10.2f\n", rec[i].price);
                found = 1;
                break;
            }
        }
    }

    if (found == 0) printf("No book with the name %c found", target);

    return 0;
}
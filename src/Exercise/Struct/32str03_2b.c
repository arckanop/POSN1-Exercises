#include <stdio.h>

struct book {
    int id;
    char name[60];
    char author[50];
    float price;
};

int main() {
    int i, j, k, found = 0, check;
    char target[60];

    struct book rec[5] = {
        {1001, "Harry Potter", "J. K. Rowling", 1256.70},
        {1002, "Unfortunate Events", "Lemony Snicket", 1344.47},
        {1003, "JAVA language", "Teerawat Prakobpol", 189.05},
        {1004, "Microprocessor", "Teerawat Prakobpol", 342.00},
        {1005, "Basic C language", "Teerawat Prakobpol", 225.05}
    };

    printf("ID   Name\t\t\t Author\t\t\t Price\n");
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", rec[i].id);
        printf("%-20s", rec[i].name);
        printf("%-25s", rec[i].author);
        printf("%10.2f\n", rec[i].price);
    }

    printf("Enter the book's name of the book that you want to find: ");
    scanf("%s", target);

    for (i = 0; i < 5; i++) {
        for (j = 0; j <= strlen(rec[i].name) - strlen(target); j++) {
            check = 1;
            if (rec[i].name[j] == target[0]) {
                check = 0;
                for (k = 1; k < strlen(target); k++) {
                    if (target[k] != rec[i].name[j + k]){
                        check = 1;
                        break;
                    }
                }
            }
            if (check == 0) {
                if(found == 0) {
                    printf("\nID   Name\t\t\t Author\t\t\t Price\n");
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

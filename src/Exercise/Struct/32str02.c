#include <stdio.h>

struct student {
    char name[100];
    int age;
};

int main() {
    struct student std[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Student[%d]\n", i);
        printf("\tname: ");
        scanf("%s", std[i].name);
        printf("\tage: ");
        scanf("%d", &std[i].age);
    }

    printf("\n");

    for (i = 0; i < 10; i++) {
        if(std[i].age > 18)
            printf("%s, %d\n", std[i].name, std[i].age);
    }

    return 0;
}

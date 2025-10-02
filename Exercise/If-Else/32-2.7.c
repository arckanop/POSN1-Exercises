#include <stdio.h>

int main() {
	const float pi = 3.14;
	float radius, ans;
	int choice;
	printf("Please input radius: ");
	scanf("%f", &radius);

	printf("Calculator Menu: \n\t1. Find Area\n\t2. Find circumference\nChoose menu: ");
	scanf("%d", &choice);

	if (choice == 1) {
		printf("Area = %.2f", pi * radius * radius);
	} else if (choice == 2) {
		printf("Circumference = %.2f", 2 * pi * radius);
	} else {
		printf("Please enter a valid choice");
	}

	return 0;
}
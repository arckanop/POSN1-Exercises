#include <stdio.h>

int main() {
	int i, x;
	float avg = 0;
	printf("Enter the numbers that you want to find the average: \n");

	for (i = 0; i < 10; i++) {
		scanf("%d", &x);
		avg += x;
	}

	avg /= 10.0;
	printf("The average of those numbers is = %.2f.", avg);

	return 0;
}
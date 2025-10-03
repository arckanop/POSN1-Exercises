#include <stdio.h>

int main() {
	int firstDay, numberOfDays, i, j, x = 0;
	printf("Enter the first day of the month: ");
	scanf("%d", &firstDay);
	printf("Enter the number of days: ");
	scanf("%d", &numberOfDays);

	for (i = 1; i < firstDay; i++) {
		printf("%2s ", " ");
		x++;
	}

	for (j = 1; j <= 3 + 1; j++) {
		if (j != 1) {
			for (i = 0; i < x; i++) {
				printf("%2s ", " ");
				// x++;
			}
		}

		for (i = 1; i <= numberOfDays; i++) {
			printf("%2d ", i);
			x++;
			if (x == 7) {
				printf("\n");
				x = 0;
			}
		}
		printf("\n");
	}

	return 0;
}
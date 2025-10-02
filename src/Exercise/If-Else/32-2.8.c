#include <stdio.h>

int main() {
	float price = 0;
	int area;
	printf("Please input area : ");
	scanf("%d", &area);

	if (area < 0) {
		printf("Error!");
	} else {
		if (area < 80) {
			price = area * 12.50;
		} else if (area >= 80 && area <= 200) {
			price = area * 10;
		} else if (area > 200 && area <= 400) {
			price = area * 7.50;
		} else if (area > 400) {
			price = area * 5;
		}

		printf("Total service costs : %.0f baht", price);
	}

	return 0;
}
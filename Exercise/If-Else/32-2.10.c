#include <stdio.h>

int main() {
	const int list[7] = {5, 10, 12, 15, 18, 20, 21}, quant[7] = {10, 50, 100, 500, 1000, 5000};
	int units, i = 0, price = 0, usage;
	printf("Total Usage : ");
	scanf("%d", &units);

	while (units > 0) {
		if (i == 0) {
			usage = quant[i];
		} else if (i > 5) {
			usage = units;
			price += units * list[i];
			units = 0;
			break;
		} else {
			usage = quant[i] - quant[i - 1];
		}

		if (units < usage) usage = units;
		price += usage * list[i];
		units -= usage;
		i++;
	}

	printf("Total Amount : ");
	printf("%d", price);

	return 0;
}
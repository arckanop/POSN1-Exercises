#include <stdio.h>

void menu() {
	int i;
	for (i = 0; i < 13; i++ ) printf("=");
	printf(" Menu ");
	for (i = 0; i < 13; i++ ) printf("=");

	printf("\n");

	printf("# 1 ADD                        #\n");
	printf("# 2 SUBTRACT                   #\n");
	printf("# 3 MULTIPLY                   #\n");
	printf("# 4 DEVIDE                     #\n");
	printf("# 3 PLEASE SELECT MENU 1 - 4   #\n");

	for (i = 0; i < 32; i++ ) printf("=");

	printf("\n");
}

float plus(float x, float y) {
	return x + y;
}

float minus(float x, float y) {
	return x - y;
}

float times(float x, float y) {
	return x * y;
}

float divide(float x, float y) {
	return x / y;
}

int main() {
	float x, y;
	char op;

	menu();

	printf(">> ");
	scanf("%c", &op);

	if (op == '1' || op == '2' || op == '3' || op == '4') {
		printf("Enter 2 numbers (x and y): \n");
		scanf("%f%f", &x, &y);

		switch(op) {
			case '1':
				printf("%.2f + %.2f = %.2f", x, y, plus(x, y));
				break;
			case '2':
				printf("%.2f - %.2f = %.2f", x, y, minus(x, y));
				break;
			case '3':
				printf("%.2f x %.2f = %.2f", x, y, times(x, y));
				break;
			case '4':
				printf("%.2f / %.2f = %.2f", x, y, divide(x, y));
				break;
			default:
				printf("Error");
		}
	} else printf("Error: Please only select 1 - 4");

	return 0;
}

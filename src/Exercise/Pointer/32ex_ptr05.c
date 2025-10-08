#include <stdio.h>

int main() {
	char str[505];
	printf("Enter any string: ");
	scanf("%[^\n]", str);

	char *p = str;
	int i, len = 0;

	printf("Original string = ");
	for (i = 0; *(p + i) != '\0'; i++) {
		len++;
		printf("%c", *(p + i));
	}

	printf("\nReverse string = ");

	for (i = len - 1; i >= 0; i--) {
		printf("%c", *(p + i));
	}

	return 0;
}

#include <stdio.h>

int main() {
	char string[20] = "Hello World!";
	char *p = string;
	int i, len = 0;

	for (i = 0; *(p + i) != '\0'; i++) {
		len++;
	}

	printf("%d", len);
}
#include <stdio.h>

int main() {
	char str[505];
	printf("Input a string: ");
	scanf("%[^\n]", str);

	char *p = str;

	int i, len = 0;

	for (i = 0; *(p + i) != '\0'; i++) {
		len++;
	}

	printf("Length of the string: %d", len);

	return 0;
}

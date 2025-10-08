#include <stdio.h>

int main() {
	char str1[20] = "Hello World!", str2[20];
	char *p = str1, *q = str2;
	int len = 0;

	for (int i = 0; *(p + i) != '\0'; i++) {
		len++;
	}

	for (int i = 0; i < len; i++) {
		*(q + i) = *(p + i);
	}

	for (int i = 0; i < len; i++) {
		printf("%c", *(q + i));
	}

	return 0;
}
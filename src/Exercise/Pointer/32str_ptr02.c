#include <stdio.h>

int main() {
	char string[20], repeat[20], *p = string;
	scanf("%[^\n]", string);
	int i, j, len = 0, found = 0;

	for (i = 0; *(p + i) != '\0'; i++) {
		len++;
	}

	for (i = 0; i < len; i++) {
		for (j = 0; j < len - i - 1; j++) {
			if (*(p + i) == *(p + j)) {
				printf("%c", *(p + i));
			}
		}
	}

	printf("%d", len);
}
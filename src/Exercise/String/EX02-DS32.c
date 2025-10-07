// Kanop Sutharomna

#include <stdio.h>

int main() {
	char text[505];
	gets(text);

	int i, count = 0;
	for (i = 0; text[i] != '\0'; i++) {
		count++;
	}

	for (i = count - 1; i >= 0; i--) {
		printf("%c", text[i]);
	}

	return 0;
}
#include <stdio.h>

int main() {
	int i;
	char ch;
	printf("Enter a character that you want to start with (to decrease until A): ");
	scanf("%c", &ch);

	if (ch >= 97 && ch <= 122) ch -= 32;

	for (i = ch; i >= 65; i--) {
		printf("%c ", i);
	}

	return 0;
}
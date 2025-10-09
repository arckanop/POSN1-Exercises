#include <stdio.h>

int main() {
	char str[15];
	printf("Input a string: ");
	scanf("%10s", str);

	int i, len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i] != str[len - i - 1]) {
			printf("Not a palindrome");
			return 0;
		}
	}

	printf("Palindrome");

	return 0;
}
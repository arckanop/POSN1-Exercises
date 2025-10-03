#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("Enter the number that you want reversed: ");
	scanf("%s",str);

	if ( str[0] != '-') {
		for (int len = strlen(str) - 1; len >= 0; len--) {
			printf("%c", str[len]);
		}
	} else {
		printf("invalid input");
	}

	return 0;
}
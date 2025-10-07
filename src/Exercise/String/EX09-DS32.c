// Kanop Sutharomna

#include <stdio.h>

int main() {
	char num[505];
	scanf("%s", num);

	long long i, len = 0, sum = 0;

	for (i = 0; num[i] != '\0'; i++) {
		len++;
	}

	for (i = 0; i < len; i++) {
		sum += num[i];
	}

	printf("Sum = %lld\nLength =  %lld", sum, len);
	return 0;
}
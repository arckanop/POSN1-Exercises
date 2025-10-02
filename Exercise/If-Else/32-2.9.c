#include <stdio.h>

int main() {
	long long time;
	int hours, mins, secs;
	printf("Enter Second of Times : ");
	scanf("%lld", &time);

	secs = time % 60;
	time = (time - secs) / 60;
	mins = time % 60;
	time = (time - mins) / 60;
	hours = time % 60 % 24;
	time = (time - hours) / 24;

	printf("%d Days %d Hours %d Minutes and %d Seconds", time, hours, mins, secs);
	return 0;
}
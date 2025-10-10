#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
};

struct student {
	int id;
	char name[40];
	struct date birth;
	struct date checkIn;
	int class;
};

int main() {
	int i;
	struct student latest;
	struct student record[5] = {
		{10001, "Chris Hemsworth", {11, 12, 2552}, {3, 5, 2560}, 4},
		{10002, "Tom Cruise",      {3,  4, 2552},  {6, 5, 2555}, 4},
		{10003, "Taylor Swift",    {13, 12, 2552}, {1, 5, 2560}, 2},
		{10004, "Hugh Grant",      {9,  9, 2551},  {1, 5, 2560}, 1},
		{10005, "Kristen Stewart", {9,  4, 2552},  {7, 5, 2560}, 1}
	};

	printf("ID\tName\t\t\tBirth(dd/mm/yyyy)\tCheckin(dd/mm/yyyy)\tClass\n");

	for (i = 0; i < 5; i++) {
		printf("%-5d %-20s %02d/%02d/%04d\t\t%02d/%02d/%04d\t\t%d\n",
			   record[i].id,
			   record[i].name,
			   record[i].birth.day, record[i].birth.month, record[i].birth.year,
			   record[i].checkIn.day, record[i].checkIn.month, record[i].checkIn.year,
			   record[i].class);
	}

	for (i = 0; i < 5; i++) {
		if (i == 0) latest = record[i];
		else if (record[i].checkIn.year > latest.checkIn.year ||
		   (record[i].checkIn.year == latest.checkIn.year && record[i].checkIn.month > latest.checkIn.month) ||
		   (record[i].checkIn.year == latest.checkIn.year && record[i].checkIn.month == latest.checkIn.month && record[i].checkIn.day > latest.checkIn.day)
		   ) {
			latest = record[i];
		}
	}

	printf("\nThe newest student: \n");
	printf("ID\tName\t\t\tBirth(dd/mm/yyyy)\tCheckin(dd/mm/yyyy)\tClass\n");
	printf("%-5d %-20s %02d/%02d/%04d\t\t%02d/%02d/%04d\t\t%d\n",
			   latest.id,
			   latest.name,
			   latest.birth.day, latest.birth.month, latest.birth.year,
			   latest.checkIn.day, latest.checkIn.month, latest.checkIn.year,
			   latest.class
			   );

	return 0;
}
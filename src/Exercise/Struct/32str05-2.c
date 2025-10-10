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
	struct student youngest;
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
		if (i == 0) youngest = record[i];
		else if (record[i].birth.year > youngest.birth.year ||
		   (record[i].birth.year == youngest.birth.year && record[i].birth.month > youngest.birth.month) ||
		   (record[i].birth.year == youngest.birth.year && record[i].birth.month == youngest.birth.month && record[i].birth.day > youngest.birth.day)
		   ) {
			youngest = record[i];
		   }
	}

	printf("\nThe youngest student: \n");
	printf("ID\tName\t\t\tBirth(dd/mm/yyyy)\tCheckin(dd/mm/yyyy)\tClass\n");
	printf("%-5d %-20s %02d/%02d/%04d\t\t%02d/%02d/%04d\t\t%d\n",
			   youngest.id,
			   youngest.name,
			   youngest.birth.day, youngest.birth.month, youngest.birth.year,
			   youngest.checkIn.day, youngest.checkIn.month, youngest.checkIn.year,
			   youngest.class
			   );

	return 0;
}
#include <stdio.h>
#include "holberton.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2000;

	printf("Day is now %02d\n", day);
	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	printf("Day is now %02d\n", day);

	print_remaining_days(month, day, year);

	return (0);
}

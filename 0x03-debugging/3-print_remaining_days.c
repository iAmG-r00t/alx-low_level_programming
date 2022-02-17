#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
*		left in the year, taking leap years into account
*
* @month: month in number format
* @day: day of month
* @year: year
*/

void print_remaining_days(int month, int day, int year)
{
	/**
	 * check is the year is a leap year, where it is a leap year
	 * if the year can be divided by 4 evenly, and if the year
	 * can be divided evenly by 100 then its not a leap year
	 * unless it is divisible by 400
	*/
	if (year % 4 == 0 && ((year % 100 == 0) && (year % 400 == 0)))
	{
		/**
		 * if its a leap year then check if the month
		 * is february and if its days are larger or
		 * equal to 60 and if it is add one day
		*/
		if (month > 2 && day >= 60)
		{
			day++;
		}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);

	}
	/*if its not a leap year then ..*/
	else
	{
		/**
		 * check if month is february and if days
		 * are equal to 60 then its an invalid date
		*/
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

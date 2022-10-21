#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	/*  if the year is a leap year */
	if ((year % 4 == 0 && !(year % 100 == 0)) ||
			(year % 4 == 0 && year % 100 == 0 && year % 400 == 0))
	{
		/* if it is past day 29 in February) */
		if (month > 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	/* if it is not a leap year */
	else
	{
		if (month == 2 && day >= 60)
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

/*
*	exceptions
*	==========
*	feb should not be more than 28 days in non-leap year - done
*	the 29th should be the 60th day not the 61th - done, but revealed another edge case
*	feb should not be more than 29 days in a leap year
*	no month should be more than 30 days anytime
*/

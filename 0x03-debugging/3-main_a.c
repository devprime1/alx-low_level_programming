#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year, taking
 * leap years into account
 * Return: 0
 */

int main(void)
{
	int m;
	int d;
	int y;

	m = 4;
	d = 01;
	y = 1997;

	printf("Date: %02d/%02d/%04d\n", m, d, y);

	day = convert_day(m, d);

	print_remaining_days(m, d, y);

	return (0);
}

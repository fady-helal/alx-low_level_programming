#include "main.h"
/**
 *
 * prints the numbers, from 0 to 9, followed by a new line.
 * Do not print 2 and 4
 * @void : no parameter
 * return : void
 * */
void print_most_numbers(void)
{
int i;
	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 2 || i == 4)
		continue;
		_putchar(i + 48);
	}
		_putchar('\n');
}

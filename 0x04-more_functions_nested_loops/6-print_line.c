#include "main.h"
/**
 * void print_line(int n): draws a straight line in the terminal.
 * @n: parameter 
 * return :void
 *
*/
void print_line(int n)
{
	int i;
	if (n < 0)
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else 
	{
		_putchar('\n');
	}
}	

#include "main.h"
/**
 * times_table - time table of 9
 * @void: no parameter
 *
 * Description: time tabe function
 *
 * return: no return type
 */
void times_table(void)
{
int x, y, prod;
for (x = 0 ; x <= 9 ; x++)
{
	_putchar(48);
	for (y = 0 ; y <= 9 ; y++)
	{
		_putchar(',');
		_putchar(' ');
		prod = x * y;
		if (prod <= 9)
			_putchar(' ');
		else
			_putchar((prod / 10) + 48);
		_putchar((prod % 10) + 48);
	}
	_putchar('\n');
}
}


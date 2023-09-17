#include "main.h"
#include <stdio.h>
/**
 * print_number - printing numbers with putchar
 * @n: intger number
 * Return: no return
 */

void print_number(int n)
{
	unsigned int i = n;
	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((n / 10) > 0)
		print_number(i / 10);
	_putchar((i % 10) + 48);
}	

#include "main.h"
/**
 * print_square - painting a sq in stdout with #
 * @size: integer with size of these square
 * Return: no return (void)
 */
void print_square(int size)
{
int i , j ;
if (size > 0)
{
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ;j++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
else 
{
	_putchar('\n');
}
}

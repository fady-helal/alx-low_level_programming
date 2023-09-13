#include "main.h"
/**
 *print_alphabet_x10 - write alphabet 10 times
 *@void: no parameter
 *
 *Description: function file for alphabet 10X
 *
 * Return: On success 0
 */
void print_alphabet_x10(void)
{
	int i;
	char x;
	for (i = 0 ;i <= 9 ; i++)
	{
		for(x = 'a' ; x <= 'z' ; x++)
			_putchar(x);
		_putchar('\n');
	}
}

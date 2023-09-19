#include "main.h"
/**
 * puts2 - print n%%2==0
 * @str: array
 * Return: void
 */
void puts2(char *str)
{
	int i = *str;
	int length = 0;
while (str[length] != '\n')
{
length++;

}

	for (i = 0 ; i < length ; i++)
	{
	if (i % 2 == 0 )
	{
		_putchar(str[length]);
	}
	}
	_putchar('\n');
}

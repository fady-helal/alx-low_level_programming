#include "main.h"
/**
 * print_alphabet - printing all alphabet in small
 * @void: no parametar needed
 * Description: printing alphabet
 * Return: no return type
 */
void print_alphabet(void)
{
	char x;
	for (x = 'a' ; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

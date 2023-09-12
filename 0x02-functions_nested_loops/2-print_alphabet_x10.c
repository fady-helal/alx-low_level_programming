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
char i;
int j;
for (j = 0 ; j < 10 ; j++)
{
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
}
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:expect letter e and q
 *
 * Return: (0)success
*/
int main(void)
{
char x;
for (x = 'a' ; x <= 'z' ; x++)
{
	if ( x != 'e' && x != 'q' )
		{
		putchar (x);
		}
}
putchar ('\n');
}

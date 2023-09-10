#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description: nested loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y, z;
for (x = 0 ; x <= 9 ; x++)
{
	for (y = x + 1 ; y <= 9 ; y++)
	{
	for (z = y + 1 ; y <= 9 ; y++)
		{
	putchar (x + '0');
	putchar (y + '0');
	putchar (z + '0');
	if (x == 7 && y == 8 ; z == 9)
	continue;
	putchar (44);
	putchar (32);
		}
	}
}
putchar ('\n');
return (0);


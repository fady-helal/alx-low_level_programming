#include<stdio.h>
/**
 * main - Entry Point
 *
 * Description: This putchar task
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x,y;
	for (x = 'a' ; x <= 'z' ; x++)
	{
	putchar (x);
	}
	for (y = 'A' ; y <= 'Z' ; y++)
	{
	putchar (y);
	}
	putchar ('\n');
}

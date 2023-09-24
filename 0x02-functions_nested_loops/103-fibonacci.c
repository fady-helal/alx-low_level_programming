#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: fabiona
 *
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
unsigned long i, first, second, next;
first = 0;
second = 1;
for (i = 0 ; i < 10000 ; i++)
{
next = first + second;
first = second;
second = next;
}
if (next < 4000000)
{
printf("%lu\n", next);
}
return (0);
}





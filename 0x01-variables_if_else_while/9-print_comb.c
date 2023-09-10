#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:print numbers followed by space and,
 *
 * Return : (0) success
*/
int main(void)
{
int x;
for (x = 48 ; x < 58 ; x++)
{
	putchar(x);
	if (x == 57)
		continue;
	putchar(44);
	putchar(32);
}
putchar ('\n');
return (0);
}

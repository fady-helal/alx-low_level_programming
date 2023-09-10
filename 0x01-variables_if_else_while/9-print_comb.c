#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : print numbers followed by space and ,
 *
 * Return : (0) success
*/
int main(void)
{
int x;
for (x = 0 ; x < 10 ; x++)
{
	putchar(x);
	putchar(44);
	putchar(32);
}
}

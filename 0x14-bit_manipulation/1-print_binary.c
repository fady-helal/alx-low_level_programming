#include"main.h"
/**
 * print_binary - convert ul to binary 
 * @n:arg.
 * return : void
 * 
*/
void print_binary(unsigned long int n)
{
int bit = sizeof(n) * n;
int num = 0;
while(bit)
{
    if (n & 1L << --bit)
        {
            _putchar('1');
            num++;
        }
    else if(num)
        _putchar('0');
}
if(!num)
_putchar('0');


}
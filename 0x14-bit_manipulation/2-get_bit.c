#include "main.h"
/**
 * get_bit - gets the bit at the index.
 * @n: number.
 * @index:the bit to get.
 * Return : the bit state or -1 if fail.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{
return (-1);
}
return (n >> index & 1);

}
